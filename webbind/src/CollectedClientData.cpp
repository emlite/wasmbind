#include "webbind/CollectedClientData.hpp"

using emlite::Val;
namespace webbind {

CollectedClientData::CollectedClientData(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
CollectedClientData CollectedClientData::take_ownership(Handle h) noexcept {
        return CollectedClientData(h);
    }
CollectedClientData::CollectedClientData(const emlite::Val &val) noexcept: emlite::Val(val) {}
CollectedClientData::CollectedClientData() noexcept: emlite::Val(emlite::Val::object()) {}
CollectedClientData CollectedClientData::clone() const noexcept { return *this; }

jsbind::String CollectedClientData::type() const {
    return emlite::Val::get("type").as<jsbind::String>();
}

void CollectedClientData::type(const jsbind::String& value) {
    emlite::Val::set("type", value);
}

jsbind::String CollectedClientData::challenge() const {
    return emlite::Val::get("challenge").as<jsbind::String>();
}

void CollectedClientData::challenge(const jsbind::String& value) {
    emlite::Val::set("challenge", value);
}

jsbind::String CollectedClientData::origin() const {
    return emlite::Val::get("origin").as<jsbind::String>();
}

void CollectedClientData::origin(const jsbind::String& value) {
    emlite::Val::set("origin", value);
}

bool CollectedClientData::crossOrigin() const {
    return emlite::Val::get("crossOrigin").as<bool>();
}

void CollectedClientData::crossOrigin(bool value) {
    emlite::Val::set("crossOrigin", value);
}

jsbind::String CollectedClientData::topOrigin() const {
    return emlite::Val::get("topOrigin").as<jsbind::String>();
}

void CollectedClientData::topOrigin(const jsbind::String& value) {
    emlite::Val::set("topOrigin", value);
}


} // namespace webbind