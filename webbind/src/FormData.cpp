#include <webbind/FormData.hpp>
#include <webbind/Blob.hpp>
#include <webbind/HTMLElement.hpp>
#include <webbind/HTMLFormElement.hpp>


FormData FormData::take_ownership(Handle h) noexcept {
        return FormData(h);
    }
FormData FormData::clone() const noexcept { return *this; }
FormData::FormData(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
FormData::FormData(const emlite::Val &val) noexcept: emlite::Val(val) {}


FormData::FormData(const HTMLFormElement& form, const HTMLElement& submitter): emlite::Val(emlite::Val::global("FormData").new_(form, submitter)) {}

jsbind::Undefined FormData::append(const jsbind::USVString& name, const Blob& blobValue, const jsbind::USVString& filename) {
    return emlite::Val::call("append", name, blobValue, filename).as<jsbind::Undefined>();
}

jsbind::Undefined FormData::delete_(const jsbind::USVString& name) {
    return emlite::Val::call("delete", name).as<jsbind::Undefined>();
}

jsbind::Any FormData::get(const jsbind::USVString& name) {
    return emlite::Val::call("get", name).as<jsbind::Any>();
}

jsbind::Sequence<jsbind::Any> FormData::getAll(const jsbind::USVString& name) {
    return emlite::Val::call("getAll", name).as<jsbind::Sequence<jsbind::Any>>();
}

bool FormData::has(const jsbind::USVString& name) {
    return emlite::Val::call("has", name).as<bool>();
}

jsbind::Undefined FormData::set(const jsbind::USVString& name, const Blob& blobValue, const jsbind::USVString& filename) {
    return emlite::Val::call("set", name, blobValue, filename).as<jsbind::Undefined>();
}

