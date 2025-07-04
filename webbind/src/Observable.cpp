#include <webbind/Observable.hpp>
#include <webbind/AbortSignal.hpp>


SubscribeOptions::SubscribeOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SubscribeOptions SubscribeOptions::take_ownership(Handle h) noexcept {
        return SubscribeOptions(h);
    }
SubscribeOptions::SubscribeOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
SubscribeOptions::SubscribeOptions() noexcept: emlite::Val(emlite::Val::object()) {}
SubscribeOptions SubscribeOptions::clone() const noexcept { return *this; }

AbortSignal SubscribeOptions::signal() const {
    return emlite::Val::get("signal").as<AbortSignal>();
}

void SubscribeOptions::signal(const AbortSignal& value) {
    emlite::Val::set("signal", value);
}

Observable Observable::take_ownership(Handle h) noexcept {
        return Observable(h);
    }
Observable Observable::clone() const noexcept { return *this; }
Observable::Observable(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
Observable::Observable(const emlite::Val &val) noexcept: emlite::Val(val) {}


Observable::Observable(const jsbind::Function& callback): emlite::Val(emlite::Val::global("Observable").new_(callback)) {}

jsbind::Undefined Observable::subscribe(const jsbind::Any& observer, const SubscribeOptions& options) {
    return emlite::Val::call("subscribe", observer, options).as<jsbind::Undefined>();
}

Observable Observable::from(const jsbind::Any& value) {
    return emlite::Val::global("observable").call("from", value).as<Observable>();
}

Observable Observable::takeUntil(const jsbind::Any& value) {
    return emlite::Val::call("takeUntil", value).as<Observable>();
}

Observable Observable::map(const jsbind::Function& mapper) {
    return emlite::Val::call("map", mapper).as<Observable>();
}

Observable Observable::filter(const jsbind::Function& predicate) {
    return emlite::Val::call("filter", predicate).as<Observable>();
}

Observable Observable::take(long long amount) {
    return emlite::Val::call("take", amount).as<Observable>();
}

Observable Observable::drop(long long amount) {
    return emlite::Val::call("drop", amount).as<Observable>();
}

Observable Observable::flatMap(const jsbind::Function& mapper) {
    return emlite::Val::call("flatMap", mapper).as<Observable>();
}

Observable Observable::switchMap(const jsbind::Function& mapper) {
    return emlite::Val::call("switchMap", mapper).as<Observable>();
}

Observable Observable::inspect(const jsbind::Any& inspectorUnion) {
    return emlite::Val::call("inspect", inspectorUnion).as<Observable>();
}

Observable Observable::catch_(const jsbind::Function& callback) {
    return emlite::Val::call("catch", callback).as<Observable>();
}

Observable Observable::finally(const jsbind::Any& callback) {
    return emlite::Val::call("finally", callback).as<Observable>();
}

jsbind::Promise Observable::toArray(const SubscribeOptions& options) {
    return emlite::Val::call("toArray", options).as<jsbind::Promise>();
}

jsbind::Promise Observable::forEach(const jsbind::Function& callback, const SubscribeOptions& options) {
    return emlite::Val::call("forEach", callback, options).as<jsbind::Promise>();
}

jsbind::Promise Observable::every(const jsbind::Function& predicate, const SubscribeOptions& options) {
    return emlite::Val::call("every", predicate, options).as<jsbind::Promise>();
}

jsbind::Promise Observable::first(const SubscribeOptions& options) {
    return emlite::Val::call("first", options).as<jsbind::Promise>();
}

jsbind::Promise Observable::last(const SubscribeOptions& options) {
    return emlite::Val::call("last", options).as<jsbind::Promise>();
}

jsbind::Promise Observable::find(const jsbind::Function& predicate, const SubscribeOptions& options) {
    return emlite::Val::call("find", predicate, options).as<jsbind::Promise>();
}

jsbind::Promise Observable::some(const jsbind::Function& predicate, const SubscribeOptions& options) {
    return emlite::Val::call("some", predicate, options).as<jsbind::Promise>();
}

jsbind::Promise Observable::reduce(const jsbind::Function& reducer, const jsbind::Any& initialValue, const SubscribeOptions& options) {
    return emlite::Val::call("reduce", reducer, initialValue, options).as<jsbind::Promise>();
}

