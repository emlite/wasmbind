#include "webbind/HandwritingRecognizer.hpp"
#include "webbind/HandwritingDrawing.hpp"
#include "webbind/HandwritingHints.hpp"

namespace webbind {

HandwritingRecognizer HandwritingRecognizer::take_ownership(Handle h) noexcept {
        return HandwritingRecognizer(h);
    }
HandwritingRecognizer HandwritingRecognizer::clone() const noexcept { return *this; }
emlite::Val HandwritingRecognizer::instance() noexcept { return emlite::Val::global("HandwritingRecognizer"); }
HandwritingRecognizer::HandwritingRecognizer(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
HandwritingRecognizer::HandwritingRecognizer(const emlite::Val &val) noexcept: emlite::Val(val) {}

HandwritingDrawing HandwritingRecognizer::startDrawing() {
    return emlite::Val::call("startDrawing").as<HandwritingDrawing>();
}

HandwritingDrawing HandwritingRecognizer::startDrawing(const HandwritingHints& hints) {
    return emlite::Val::call("startDrawing", hints).as<HandwritingDrawing>();
}

jsbind::Undefined HandwritingRecognizer::finish() {
    return emlite::Val::call("finish").as<jsbind::Undefined>();
}


} // namespace webbind