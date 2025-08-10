#include "webbind/NDEFMessageInit.hpp"
#include "webbind/NDEFRecordInit.hpp"

using emlite::Val;
namespace webbind {

NDEFMessageInit::NDEFMessageInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
NDEFMessageInit NDEFMessageInit::take_ownership(Handle h) noexcept {
        return NDEFMessageInit(h);
    }
NDEFMessageInit::NDEFMessageInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
NDEFMessageInit::NDEFMessageInit() noexcept: emlite::Val(emlite::Val::object()) {}
NDEFMessageInit NDEFMessageInit::clone() const noexcept { return *this; }

jsbind::TypedArray<NDEFRecordInit> NDEFMessageInit::records() const {
    return emlite::Val::get("records").as<jsbind::TypedArray<NDEFRecordInit>>();
}

void NDEFMessageInit::records(const jsbind::TypedArray<NDEFRecordInit>& value) {
    emlite::Val::set("records", value);
}


} // namespace webbind