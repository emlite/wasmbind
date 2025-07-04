#include <webbind/HandwritingRecognizer.hpp>
#include <webbind/HandwritingDrawing.hpp>


HandwritingHints::HandwritingHints(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
HandwritingHints HandwritingHints::take_ownership(Handle h) noexcept {
        return HandwritingHints(h);
    }
HandwritingHints::HandwritingHints(const emlite::Val &val) noexcept: emlite::Val(val) {}
HandwritingHints::HandwritingHints() noexcept: emlite::Val(emlite::Val::object()) {}
HandwritingHints HandwritingHints::clone() const noexcept { return *this; }

jsbind::DOMString HandwritingHints::recognitionType() const {
    return emlite::Val::get("recognitionType").as<jsbind::DOMString>();
}

void HandwritingHints::recognitionType(const jsbind::DOMString& value) {
    emlite::Val::set("recognitionType", value);
}

jsbind::DOMString HandwritingHints::inputType() const {
    return emlite::Val::get("inputType").as<jsbind::DOMString>();
}

void HandwritingHints::inputType(const jsbind::DOMString& value) {
    emlite::Val::set("inputType", value);
}

jsbind::DOMString HandwritingHints::textContext() const {
    return emlite::Val::get("textContext").as<jsbind::DOMString>();
}

void HandwritingHints::textContext(const jsbind::DOMString& value) {
    emlite::Val::set("textContext", value);
}

unsigned long HandwritingHints::alternatives() const {
    return emlite::Val::get("alternatives").as<unsigned long>();
}

void HandwritingHints::alternatives(unsigned long value) {
    emlite::Val::set("alternatives", value);
}

HandwritingRecognizer HandwritingRecognizer::take_ownership(Handle h) noexcept {
        return HandwritingRecognizer(h);
    }
HandwritingRecognizer HandwritingRecognizer::clone() const noexcept { return *this; }
HandwritingRecognizer::HandwritingRecognizer(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
HandwritingRecognizer::HandwritingRecognizer(const emlite::Val &val) noexcept: emlite::Val(val) {}


HandwritingDrawing HandwritingRecognizer::startDrawing(const HandwritingHints& hints) {
    return emlite::Val::call("startDrawing", hints).as<HandwritingDrawing>();
}

jsbind::Undefined HandwritingRecognizer::finish() {
    return emlite::Val::call("finish").as<jsbind::Undefined>();
}

