#include <webbind/NotRestoredReasons.hpp>
#include <webbind/NotRestoredReasonDetails.hpp>


NotRestoredReasons NotRestoredReasons::take_ownership(Handle h) noexcept {
        return NotRestoredReasons(h);
    }
NotRestoredReasons NotRestoredReasons::clone() const noexcept { return *this; }
NotRestoredReasons::NotRestoredReasons(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
NotRestoredReasons::NotRestoredReasons(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::String NotRestoredReasons::src() const {
    return emlite::Val::get("src").as<jsbind::String>();
}

jsbind::String NotRestoredReasons::id() const {
    return emlite::Val::get("id").as<jsbind::String>();
}

jsbind::String NotRestoredReasons::name() const {
    return emlite::Val::get("name").as<jsbind::String>();
}

jsbind::String NotRestoredReasons::url() const {
    return emlite::Val::get("url").as<jsbind::String>();
}

jsbind::TypedArray<NotRestoredReasonDetails> NotRestoredReasons::reasons() const {
    return emlite::Val::get("reasons").as<jsbind::TypedArray<NotRestoredReasonDetails>>();
}

jsbind::TypedArray<NotRestoredReasons> NotRestoredReasons::children() const {
    return emlite::Val::get("children").as<jsbind::TypedArray<NotRestoredReasons>>();
}

jsbind::Object NotRestoredReasons::toJSON() {
    return emlite::Val::call("toJSON").as<jsbind::Object>();
}

