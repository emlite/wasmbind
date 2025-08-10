#include <webbind/FormDataEventInit.hpp>
#include <webbind/FormData.hpp>

using emlite::Val;
namespace webbind {

FormDataEventInit::FormDataEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
FormDataEventInit FormDataEventInit::take_ownership(Handle h) noexcept {
        return FormDataEventInit(h);
    }
FormDataEventInit::FormDataEventInit(const emlite::Val &val) noexcept: EventInit(val) {}
FormDataEventInit::FormDataEventInit() noexcept: EventInit(emlite::Val::object()) {}
FormDataEventInit FormDataEventInit::clone() const noexcept { return *this; }

FormData FormDataEventInit::formData() const {
    return emlite::Val::get("formData").as<FormData>();
}

void FormDataEventInit::formData(const FormData& value) {
    emlite::Val::set("formData", value);
}


} // namespace webbind