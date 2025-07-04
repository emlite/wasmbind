#include <jsbind/Function.hpp>
#include <jsbind/Promise.hpp>
#include <jsbind/Sequence.hpp>
using namespace jsbind;
using emlite::Val;

Promise::Promise(Handle h) noexcept
    : Val(Val::take_ownership(h)) {}

Promise Promise::take_ownership(Handle h) noexcept {
    return Promise(h);
}

Promise::Promise(const emlite::Val &v) noexcept : Val(v) {}

Promise::Promise() noexcept : Val(Val::undefined()) {}

Promise Promise::then(
    const Function &onFulfilled, const Function &onRejected
) {
    return call("then", onFulfilled, onRejected)
        .as<Promise>();
}

Promise Promise::_catch(const Function &onRejected) {
    return call("catch", onRejected).as<Promise>();
}

Promise Promise::finally(const Function &onFinally) {
    return call("finally", onFinally).as<Promise>();
}

Promise Promise::resolve(const Any &value) {
    return Val::global("Promise")
        .call("resolve", value)
        .as<Promise>();
}

Promise Promise::reject(const Any &reason) {
    return Val::global("Promise")
        .call("reject", reason)
        .as<Promise>();
}

DEFINE_CLONE(Promise)