#include <webbind/NotRestoredReasons.hpp>
#include <webbind/NotRestoredReasonDetails.hpp>


NotRestoredReasons NotRestoredReasons::take_ownership(Handle h) noexcept {
        return NotRestoredReasons(h);
    }
NotRestoredReasons NotRestoredReasons::clone() const noexcept { return *this; }
NotRestoredReasons::NotRestoredReasons(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
NotRestoredReasons::NotRestoredReasons(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::USVString NotRestoredReasons::src() const {
    return emlite::Val::get("src").as<jsbind::USVString>();
}

jsbind::DOMString NotRestoredReasons::id() const {
    return emlite::Val::get("id").as<jsbind::DOMString>();
}

jsbind::DOMString NotRestoredReasons::name() const {
    return emlite::Val::get("name").as<jsbind::DOMString>();
}

jsbind::USVString NotRestoredReasons::url() const {
    return emlite::Val::get("url").as<jsbind::USVString>();
}

jsbind::FrozenArray<NotRestoredReasonDetails> NotRestoredReasons::reasons() const {
    return emlite::Val::get("reasons").as<jsbind::FrozenArray<NotRestoredReasonDetails>>();
}

jsbind::FrozenArray<NotRestoredReasons> NotRestoredReasons::children() const {
    return emlite::Val::get("children").as<jsbind::FrozenArray<NotRestoredReasons>>();
}

jsbind::Object NotRestoredReasons::toJSON() {
    return emlite::Val::call("toJSON").as<jsbind::Object>();
}

