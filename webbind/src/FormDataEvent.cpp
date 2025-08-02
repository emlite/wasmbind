#include <webbind/FormDataEvent.hpp>
#include <webbind/FormData.hpp>


FormDataEvent FormDataEvent::take_ownership(Handle h) noexcept {
        return FormDataEvent(h);
    }
FormDataEvent FormDataEvent::clone() const noexcept { return *this; }
emlite::Val FormDataEvent::instance() noexcept { return emlite::Val::global("FormDataEvent"); }
FormDataEvent::FormDataEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
FormDataEvent::FormDataEvent(const emlite::Val &val) noexcept: Event(val) {}


FormDataEvent::FormDataEvent(const jsbind::String& type, const jsbind::Any& eventInitDict) : Event(emlite::Val::global("FormDataEvent").new_(type, eventInitDict)) {}

FormData FormDataEvent::formData() const {
    return Event::get("formData").as<FormData>();
}

