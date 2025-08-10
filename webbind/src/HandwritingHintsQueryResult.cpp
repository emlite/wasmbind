#include "webbind/HandwritingHintsQueryResult.hpp"

using emlite::Val;
namespace webbind {

HandwritingHintsQueryResult::HandwritingHintsQueryResult(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
HandwritingHintsQueryResult HandwritingHintsQueryResult::take_ownership(Handle h) noexcept {
        return HandwritingHintsQueryResult(h);
    }
HandwritingHintsQueryResult::HandwritingHintsQueryResult(const emlite::Val &val) noexcept: emlite::Val(val) {}
HandwritingHintsQueryResult::HandwritingHintsQueryResult() noexcept: emlite::Val(emlite::Val::object()) {}
HandwritingHintsQueryResult HandwritingHintsQueryResult::clone() const noexcept { return *this; }

jsbind::TypedArray<HandwritingRecognitionType> HandwritingHintsQueryResult::recognitionType() const {
    return emlite::Val::get("recognitionType").as<jsbind::TypedArray<HandwritingRecognitionType>>();
}

void HandwritingHintsQueryResult::recognitionType(const jsbind::TypedArray<HandwritingRecognitionType>& value) {
    emlite::Val::set("recognitionType", value);
}

jsbind::TypedArray<HandwritingInputType> HandwritingHintsQueryResult::inputType() const {
    return emlite::Val::get("inputType").as<jsbind::TypedArray<HandwritingInputType>>();
}

void HandwritingHintsQueryResult::inputType(const jsbind::TypedArray<HandwritingInputType>& value) {
    emlite::Val::set("inputType", value);
}

bool HandwritingHintsQueryResult::textContext() const {
    return emlite::Val::get("textContext").as<bool>();
}

void HandwritingHintsQueryResult::textContext(bool value) {
    emlite::Val::set("textContext", value);
}

bool HandwritingHintsQueryResult::alternatives() const {
    return emlite::Val::get("alternatives").as<bool>();
}

void HandwritingHintsQueryResult::alternatives(bool value) {
    emlite::Val::set("alternatives", value);
}


} // namespace webbind