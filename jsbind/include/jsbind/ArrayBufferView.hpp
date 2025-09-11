#pragma once

#include <emlite/emlite.hpp>

namespace jsbind {

// Lightweight wrapper for JavaScript ArrayBufferView (a supertype of
// TypedArrays and DataView). This is used as a nominal type in generated
// bindings where WebIDL refers to ArrayBufferView.
class ArrayBufferView : public emlite::Val {
    explicit ArrayBufferView(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

public:
    explicit ArrayBufferView(const emlite::Val &v) noexcept : emlite::Val(v) {}

    static ArrayBufferView take_ownership(Handle h) noexcept { return ArrayBufferView(h); }
};

} // namespace jsbind

