#include <webbind/FormData.hpp>
#include <webbind/HTMLFormElement.hpp>
#include <webbind/HTMLElement.hpp>
#include <webbind/Blob.hpp>

namespace webbind {

FormData FormData::take_ownership(Handle h) noexcept {
    return FormData(h);
}

FormData FormData::clone() const noexcept { return *this; }

emlite::Val FormData::instance() noexcept { return emlite::Val::global("FormData"); }

FormData::FormData(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

FormData::FormData(const emlite::Val &val) noexcept: emlite::Val(val) {}

FormData::FormData() : emlite::Val(emlite::Val::global("FormData").new_()) {}

FormData::FormData(const HTMLFormElement& form) : emlite::Val(emlite::Val::global("FormData").new_(form)) {}

FormData::FormData(const HTMLFormElement& form, const HTMLElement& submitter) : emlite::Val(emlite::Val::global("FormData").new_(form, submitter)) {}

jsbind::Undefined FormData::append(const jsbind::String& name, const jsbind::String& value) {
    return emlite::Val::call("append", name, value).as<jsbind::Undefined>();
}

jsbind::Undefined FormData::append(const jsbind::String& name, const Blob& blobValue) {
    return emlite::Val::call("append", name, blobValue).as<jsbind::Undefined>();
}

jsbind::Undefined FormData::append(const jsbind::String& name, const Blob& blobValue, const jsbind::String& filename) {
    return emlite::Val::call("append", name, blobValue, filename).as<jsbind::Undefined>();
}

jsbind::Undefined FormData::delete_(const jsbind::String& name) {
    return emlite::Val::call("delete", name).as<jsbind::Undefined>();
}

jsbind::Any FormData::get(const jsbind::String& name) {
    return emlite::Val::call("get", name).as<jsbind::Any>();
}

jsbind::TypedArray<jsbind::Any> FormData::getAll(const jsbind::String& name) {
    return emlite::Val::call("getAll", name).as<jsbind::TypedArray<jsbind::Any>>();
}

bool FormData::has(const jsbind::String& name) {
    return emlite::Val::call("has", name).as<bool>();
}

jsbind::Undefined FormData::set(const jsbind::String& name, const jsbind::String& value) {
    return emlite::Val::call("set", name, value).as<jsbind::Undefined>();
}

jsbind::Undefined FormData::set(const jsbind::String& name, const Blob& blobValue) {
    return emlite::Val::call("set", name, blobValue).as<jsbind::Undefined>();
}

jsbind::Undefined FormData::set(const jsbind::String& name, const Blob& blobValue, const jsbind::String& filename) {
    return emlite::Val::call("set", name, blobValue, filename).as<jsbind::Undefined>();
}


} // namespace webbind