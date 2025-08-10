#include <webbind/HandwritingRecognizerQueryResult.hpp>
#include <webbind/HandwritingHintsQueryResult.hpp>

using emlite::Val;
namespace webbind {

HandwritingRecognizerQueryResult::HandwritingRecognizerQueryResult(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
HandwritingRecognizerQueryResult HandwritingRecognizerQueryResult::take_ownership(Handle h) noexcept {
        return HandwritingRecognizerQueryResult(h);
    }
HandwritingRecognizerQueryResult::HandwritingRecognizerQueryResult(const emlite::Val &val) noexcept: emlite::Val(val) {}
HandwritingRecognizerQueryResult::HandwritingRecognizerQueryResult() noexcept: emlite::Val(emlite::Val::object()) {}
HandwritingRecognizerQueryResult HandwritingRecognizerQueryResult::clone() const noexcept { return *this; }

bool HandwritingRecognizerQueryResult::textAlternatives() const {
    return emlite::Val::get("textAlternatives").as<bool>();
}

void HandwritingRecognizerQueryResult::textAlternatives(bool value) {
    emlite::Val::set("textAlternatives", value);
}

bool HandwritingRecognizerQueryResult::textSegmentation() const {
    return emlite::Val::get("textSegmentation").as<bool>();
}

void HandwritingRecognizerQueryResult::textSegmentation(bool value) {
    emlite::Val::set("textSegmentation", value);
}

HandwritingHintsQueryResult HandwritingRecognizerQueryResult::hints() const {
    return emlite::Val::get("hints").as<HandwritingHintsQueryResult>();
}

void HandwritingRecognizerQueryResult::hints(const HandwritingHintsQueryResult& value) {
    emlite::Val::set("hints", value);
}


} // namespace webbind