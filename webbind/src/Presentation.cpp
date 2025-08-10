#include "webbind/Presentation.hpp"
#include "webbind/PresentationRequest.hpp"
#include "webbind/PresentationReceiver.hpp"

namespace webbind {

Presentation Presentation::take_ownership(Handle h) noexcept {
        return Presentation(h);
    }
Presentation Presentation::clone() const noexcept { return *this; }
emlite::Val Presentation::instance() noexcept { return emlite::Val::global("Presentation"); }
Presentation::Presentation(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
Presentation::Presentation(const emlite::Val &val) noexcept: emlite::Val(val) {}

PresentationRequest Presentation::defaultRequest() const {
    return emlite::Val::get("defaultRequest").as<PresentationRequest>();
}

void Presentation::defaultRequest(const PresentationRequest& value) {
    emlite::Val::set("defaultRequest", value);
}

PresentationReceiver Presentation::receiver() const {
    return emlite::Val::get("receiver").as<PresentationReceiver>();
}


} // namespace webbind