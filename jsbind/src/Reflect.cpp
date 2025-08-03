#include <jsbind/Reflect.hpp>

using namespace jsbind;
using emlite::Val;

static inline Val R() { return Val::global("Reflect"); }

Result<Any, Error> Reflect::apply(const Function &target, const Any &thisArg, const TypedArray<Any> &args) {
    return R().call("apply", target, thisArg, args).as<Result<Any, Error>>();
}

Result<Any, Error> Reflect::construct(const Function &target, const TypedArray<Any> &args, const Any &newTarget) {
    return R().call("construct", target, args, newTarget).as<Result<Any, Error>>();
}

Result<bool, Error> Reflect::defineProperty(const Any &target, const Any &key, const Any &attributes) {
    return R().call("defineProperty", target, key, attributes).as<Result<bool, Error>>();
}

Result<bool, Error> Reflect::deleteProperty(const Any &target, const Any &key) {
    return R().call("deleteProperty", target, key).as<Result<bool, Error>>();
}

Result<Any, Error> Reflect::get(const Any &target, const Any &key, const Any &receiver) {
    return R().call("get", target, key, receiver).as<Result<Any, Error>>();
}

Result<Any, Error> Reflect::getOwnPropertyDescriptor(const Any &target, const Any &key) {
    return R().call("getOwnPropertyDescriptor", target, key).as<Result<Any, Error>>();
}

Result<Any, Error> Reflect::getPrototypeOf(const Any &target) {
    return R().call("getPrototypeOf", target).as<Result<Any, Error>>();
}

Result<bool, Error> Reflect::has(const Any &target, const Any &key) {
    return R().call("has", target, key).as<Result<bool, Error>>();
}

Result<bool, Error> Reflect::isExtensible(const Any &target) {
    return R().call("isExtensible", target).as<Result<bool, Error>>();
}

Result<TypedArray<Any>, Error> Reflect::ownKeys(const Any &target) {
    return R().call("ownKeys", target).as<Result<TypedArray<Any>, Error>>();
}

Result<bool, Error> Reflect::preventExtensions(const Any &target) {
    return R().call("preventExtensions", target).as<Result<bool, Error>>();
}

Result<bool, Error> Reflect::set(const Any &target, const Any &key, const Any &value, const Any &receiver) {
    return R().call("set", target, key, value, receiver).as<Result<bool, Error>>();
}

Result<bool, Error> Reflect::setPrototypeOf(const Any &target, const Any &proto) {
    return R().call("setPrototypeOf", target, proto).as<Result<bool, Error>>();
}
