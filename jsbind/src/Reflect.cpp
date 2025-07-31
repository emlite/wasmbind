#include <jsbind/Reflect.hpp>

using namespace jsbind;
using emlite::Val;

static inline Val R() { return Val::global("Reflect"); }

Any Reflect::apply(
    const Function &target,
    const Any &thisArg,
    const TypedArray<Any> &args
) {
    return R()
        .call("apply", target, thisArg, args)
        .as<Any>();
}

Any Reflect::construct(
    const Function &target,
    const TypedArray<Any> &args,
    const Any &newTarget
) {
    return R()
        .call("construct", target, args, newTarget)
        .as<Any>();
}

bool Reflect::defineProperty(
    const Any &target, const Any &key, const Any &attributes
) {
    return R()
        .call("defineProperty", target, key, attributes)
        .as<bool>();
}

bool Reflect::deleteProperty(
    const Any &target, const Any &key
) {
    return R()
        .call("deleteProperty", target, key)
        .as<bool>();
}

Any Reflect::get(
    const Any &target, const Any &key, const Any &receiver
) {
    return R().call("get", target, key, receiver).as<Any>();
}

Any Reflect::getOwnPropertyDescriptor(
    const Any &target, const Any &key
) {
    return R()
        .call("getOwnPropertyDescriptor", target, key)
        .as<Any>();
}

Any Reflect::getPrototypeOf(const Any &target) {
    return R().call("getPrototypeOf", target).as<Any>();
}

bool Reflect::has(const Any &target, const Any &key) {
    return R().call("has", target, key).as<bool>();
}

bool Reflect::isExtensible(const Any &target) {
    return R().call("isExtensible", target).as<bool>();
}

TypedArray<Any> Reflect::ownKeys(const Any &target) {
    return R()
        .call("ownKeys", target)
        .as<TypedArray<Any>>();
}

bool Reflect::preventExtensions(const Any &target) {
    return R().call("preventExtensions", target).as<bool>();
}

bool Reflect::set(
    const Any &target,
    const Any &key,
    const Any &value,
    const Any &receiver
) {
    return R()
        .call("set", target, key, value, receiver)
        .as<bool>();
}

bool Reflect::setPrototypeOf(
    const Any &target, const Any &proto
) {
    return R()
        .call("setPrototypeOf", target, proto)
        .as<bool>();
}
