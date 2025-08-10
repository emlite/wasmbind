#include "webbind/Observable.hpp"
#include "webbind/SubscribeOptions.hpp"
#include "webbind/Observable.hpp"

namespace webbind {

Observable Observable::take_ownership(Handle h) noexcept {
        return Observable(h);
    }
Observable Observable::clone() const noexcept { return *this; }
emlite::Val Observable::instance() noexcept { return emlite::Val::global("Observable"); }
Observable::Observable(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
Observable::Observable(const emlite::Val &val) noexcept: emlite::Val(val) {}

Observable::Observable(const jsbind::Function& callback) : emlite::Val(emlite::Val::global("Observable").new_(callback)) {}

jsbind::Undefined Observable::subscribe() {
    return emlite::Val::call("subscribe").as<jsbind::Undefined>();
}

jsbind::Undefined Observable::subscribe(const jsbind::Any& observer) {
    return emlite::Val::call("subscribe", observer).as<jsbind::Undefined>();
}

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

Observable Observable::inspect() {
    return emlite::Val::call("inspect").as<Observable>();
}

Observable Observable::inspect(const jsbind::Any& inspectorUnion) {
    return emlite::Val::call("inspect", inspectorUnion).as<Observable>();
}

Observable Observable::catch_(const jsbind::Function& callback) {
    return emlite::Val::call("catch", callback).as<Observable>();
}

Observable Observable::finally(const jsbind::Function& callback) {
    return emlite::Val::call("finally", callback).as<Observable>();
}

jsbind::Promise<jsbind::TypedArray<jsbind::Any>> Observable::toArray() {
    return emlite::Val::call("toArray").as<jsbind::Promise<jsbind::TypedArray<jsbind::Any>>>();
}

jsbind::Promise<jsbind::TypedArray<jsbind::Any>> Observable::toArray(const SubscribeOptions& options) {
    return emlite::Val::call("toArray", options).as<jsbind::Promise<jsbind::TypedArray<jsbind::Any>>>();
}

jsbind::Promise<jsbind::Undefined> Observable::forEach(const jsbind::Function& callback) {
    return emlite::Val::call("forEach", callback).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> Observable::forEach(const jsbind::Function& callback, const SubscribeOptions& options) {
    return emlite::Val::call("forEach", callback, options).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<bool> Observable::every(const jsbind::Function& predicate) {
    return emlite::Val::call("every", predicate).as<jsbind::Promise<bool>>();
}

jsbind::Promise<bool> Observable::every(const jsbind::Function& predicate, const SubscribeOptions& options) {
    return emlite::Val::call("every", predicate, options).as<jsbind::Promise<bool>>();
}

jsbind::Promise<jsbind::Any> Observable::first() {
    return emlite::Val::call("first").as<jsbind::Promise<jsbind::Any>>();
}

jsbind::Promise<jsbind::Any> Observable::first(const SubscribeOptions& options) {
    return emlite::Val::call("first", options).as<jsbind::Promise<jsbind::Any>>();
}

jsbind::Promise<jsbind::Any> Observable::last() {
    return emlite::Val::call("last").as<jsbind::Promise<jsbind::Any>>();
}

jsbind::Promise<jsbind::Any> Observable::last(const SubscribeOptions& options) {
    return emlite::Val::call("last", options).as<jsbind::Promise<jsbind::Any>>();
}

jsbind::Promise<jsbind::Any> Observable::find(const jsbind::Function& predicate) {
    return emlite::Val::call("find", predicate).as<jsbind::Promise<jsbind::Any>>();
}

jsbind::Promise<jsbind::Any> Observable::find(const jsbind::Function& predicate, const SubscribeOptions& options) {
    return emlite::Val::call("find", predicate, options).as<jsbind::Promise<jsbind::Any>>();
}

jsbind::Promise<bool> Observable::some(const jsbind::Function& predicate) {
    return emlite::Val::call("some", predicate).as<jsbind::Promise<bool>>();
}

jsbind::Promise<bool> Observable::some(const jsbind::Function& predicate, const SubscribeOptions& options) {
    return emlite::Val::call("some", predicate, options).as<jsbind::Promise<bool>>();
}

jsbind::Promise<jsbind::Any> Observable::reduce(const jsbind::Function& reducer) {
    return emlite::Val::call("reduce", reducer).as<jsbind::Promise<jsbind::Any>>();
}

jsbind::Promise<jsbind::Any> Observable::reduce(const jsbind::Function& reducer, const jsbind::Any& initialValue) {
    return emlite::Val::call("reduce", reducer, initialValue).as<jsbind::Promise<jsbind::Any>>();
}

jsbind::Promise<jsbind::Any> Observable::reduce(const jsbind::Function& reducer, const jsbind::Any& initialValue, const SubscribeOptions& options) {
    return emlite::Val::call("reduce", reducer, initialValue, options).as<jsbind::Promise<jsbind::Any>>();
}


} // namespace webbind