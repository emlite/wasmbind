#include <webbind/IdleDeadline.hpp>


IdleDeadline IdleDeadline::take_ownership(Handle h) noexcept {
        return IdleDeadline(h);
    }
IdleDeadline IdleDeadline::clone() const noexcept { return *this; }
IdleDeadline::IdleDeadline(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
IdleDeadline::IdleDeadline(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Any IdleDeadline::timeRemaining() {
    return emlite::Val::call("timeRemaining").as<jsbind::Any>();
}

bool IdleDeadline::didTimeout() const {
    return emlite::Val::get("didTimeout").as<bool>();
}

