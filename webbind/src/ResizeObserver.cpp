#include <webbind/ResizeObserver.hpp>
#include <webbind/Element.hpp>


ResizeObserverOptions::ResizeObserverOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ResizeObserverOptions ResizeObserverOptions::take_ownership(Handle h) noexcept {
        return ResizeObserverOptions(h);
    }
ResizeObserverOptions::ResizeObserverOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
ResizeObserverOptions::ResizeObserverOptions() noexcept: emlite::Val(emlite::Val::object()) {}
ResizeObserverOptions ResizeObserverOptions::clone() const noexcept { return *this; }

ResizeObserverBoxOptions ResizeObserverOptions::box() const {
    return emlite::Val::get("box").as<ResizeObserverBoxOptions>();
}

void ResizeObserverOptions::box(const ResizeObserverBoxOptions& value) {
    emlite::Val::set("box", value);
}

ResizeObserver ResizeObserver::take_ownership(Handle h) noexcept {
        return ResizeObserver(h);
    }
ResizeObserver ResizeObserver::clone() const noexcept { return *this; }
ResizeObserver::ResizeObserver(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ResizeObserver::ResizeObserver(const emlite::Val &val) noexcept: emlite::Val(val) {}


ResizeObserver::ResizeObserver(const jsbind::Function& callback) : emlite::Val(emlite::Val::global("ResizeObserver").new_(callback)) {}

jsbind::Undefined ResizeObserver::observe(const Element& target) {
    return emlite::Val::call("observe", target).as<jsbind::Undefined>();
}

jsbind::Undefined ResizeObserver::observe(const Element& target, const ResizeObserverOptions& options) {
    return emlite::Val::call("observe", target, options).as<jsbind::Undefined>();
}

jsbind::Undefined ResizeObserver::unobserve(const Element& target) {
    return emlite::Val::call("unobserve", target).as<jsbind::Undefined>();
}

jsbind::Undefined ResizeObserver::disconnect() {
    return emlite::Val::call("disconnect").as<jsbind::Undefined>();
}

