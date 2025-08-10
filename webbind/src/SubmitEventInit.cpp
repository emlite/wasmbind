#include "webbind/SubmitEventInit.hpp"
#include "webbind/HTMLElement.hpp"

using emlite::Val;
namespace webbind {

SubmitEventInit::SubmitEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
SubmitEventInit SubmitEventInit::take_ownership(Handle h) noexcept {
        return SubmitEventInit(h);
    }
SubmitEventInit::SubmitEventInit(const emlite::Val &val) noexcept: EventInit(val) {}
SubmitEventInit::SubmitEventInit() noexcept: EventInit(emlite::Val::object()) {}
SubmitEventInit SubmitEventInit::clone() const noexcept { return *this; }

HTMLElement SubmitEventInit::submitter() const {
    return emlite::Val::get("submitter").as<HTMLElement>();
}

void SubmitEventInit::submitter(const HTMLElement& value) {
    emlite::Val::set("submitter", value);
}


} // namespace webbind