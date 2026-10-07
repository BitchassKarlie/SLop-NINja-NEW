#include "fruit/combos.hpp"
#include <map>
namespace fruit {
ComboStar classifyCombo(const std::vector<std::string> &fruit) {
    if (fruit.size() < 3)
        return ComboStar::None;
    std::map<std::string, int> counts;
    for (const auto &f : fruit)
        ++counts[f];
    if (counts.size() == 1) {
        const std::pair<const char *, ComboStar> singles[] = {
            {"apple", ComboStar::Apples},
            {"apple_red", ComboStar::Apples},
            {"orange", ComboStar::Oranges},
            {"pineapple", ComboStar::Pineapples},
            {"watermelon", ComboStar::Watermelons},
            {"kiwifruit", ComboStar::Kiwis},
            {"mango", ComboStar::Mangoes},
            {"strawberry", ComboStar::Strawberries},
            {"pear", ComboStar::Pears},
            {"banana", ComboStar::Bananas},
            {"lime", ComboStar::Limes},
            {"lemon", ComboStar::Lemons},
            {"coconut", ComboStar::Coconuts},
            {"passionfruit", ComboStar::Passionfruits}};
        for (const auto &s : singles)
            if (fruit.front() == s.first)
                return s.second;
    } else {
        if (counts.size() == 2) {
            auto second = std::find_if(fruit.begin(), fruit.end(),
                                       [&](const auto &f) { return f != fruit.front(); });
            bool alternating = true;
            for (std::size_t i = 0; i < fruit.size(); ++i)
                if (fruit[i] != (i % 2 ? *second : fruit.front()))
                    alternating = false;
            if (alternating)
                return ComboStar::Pattern;
            if (fruit.size() == 5 && (counts.begin()->second == 2 || counts.begin()->second == 3))
                return ComboStar::FullHouse;
        } else {
            int pairs = 0;
            for (const auto &entry : counts)
                if (entry.second == 2)
                    ++pairs;
            if (counts.size() == 3 && fruit.size() == 5 && pairs == 2)
                return ComboStar::TwoPairs;
            if (counts.size() == fruit.size() && fruit.size() > 4)
                return ComboStar::AllDifferent;
        }
        bool three = false;
        for (const auto &entry : counts) {
            if (entry.second == 4)
                return ComboStar::FourOfAKind;
            three = three || entry.second == 3;
        }
        if (three)
            return ComboStar::ThreeOfAKind;
    }
    return fruit.size() >= 7 ? ComboStar::SevenPlus : static_cast<ComboStar>(int(fruit.size()) - 3);
}
const char *comboStarName(ComboStar star) {
    static const char *names[] = {
        "3_FRUIT",      "4_FRUIT",     "5_FRUIT",          "6_FRUIT",           "ALL_DIFFERENT",
        "7_FRUIT_PLUS", "ALL_APPLES",  "ALL_ORANGES",      "ALL_PINEAPPLES",    "ALL_WATERMELONS",
        "ALL_KIWIS",    "ALL_MANGOES", "ALL_STRAWBERRIES", "ALL_PEARS",         "ALL_BANANAS",
        "ALL_LIMES",    "ALL_LEMONS",  "ALL_COCONUTS",     "ALL_PASSIONFRUITS", "ALPHABETICAL",
        "FULLHOUSE",    "2_PAIR",      "3_OF_A_KIND",      "4_OF_A_KIND",       "PATTERN"};
    int i = int(star);
    return i < 0 || i >= 25 ? "" : names[i];
}
const std::vector<std::string> &comboStarTextures(ComboStar star) {
    static const std::vector<std::string> textures[] = {
        {"star_fruity", "star_juicy"},
        {"star_yummy", "star_tasty"},
        {"star_lush", "star_delicious"},
        {"star_succulent", "star_succulent"},
        {"star_fruit_salad", "star_fruits_basket", "star_megamix"},
        {"star_amazing", "star_exquisite"},
        {"star_its_apples"},
        {"star_vitamin_c"},
        {"star_got_the_sweats"},
        {"star_melon_mania"},
        {"star_flightless_bird"},
        {"star_mango_smoothie"},
        {"star_full_punnet"},
        {"star_pear_tree"},
        {"star_banana_cake"},
        {"star_scurvy_cure"},
        {"star_lemon_line_up"},
        {"star_lovely_bunch"},
        {"star_passion_punch"},
        {"star_alphabetic"},
        {"star_full_house"},
        {"star_two_pairs"},
        {"star_three_of_a_kind"},
        {"star_four_of_a_kind"},
        {"star_checkers"}};
    static const std::vector<std::string> empty;
    int i = int(star);
    return i < 0 || i >= 25 ? empty : textures[i];
}
int ComboBlitz::combo() {
    energy = std::min(14.f, energy + 1.f);
    window = 1;
    if (interval <= 0) {
        if (energy > 2.9f) {
            stage = 1;
            interval = 2.5f;
            best = std::max(best, stage);
            return 5;
        }
    } else {
        interval -= 1;
        if (interval <= 0) {
            ++stage;
            interval = 2.5f;
            best = std::max(best, stage);
            return std::min(stage, 6) * 5;
        }
    }
    return 0;
}
void ComboBlitz::slice() {
    if (window > 0)
        window = std::min(1.f, window + .05f);
}
void ComboBlitz::update(float dt, float speedLoss) {
    if (window <= 0 || dt <= 0)
        return;
    window = std::max(0.f, window - dt / std::max(.01f, speedLoss));
    if (window <= 0)
        reset();
}
void ComboBlitz::reset() {
    stage = 0;
    energy = interval = window = 0;
}
} // namespace fruit
