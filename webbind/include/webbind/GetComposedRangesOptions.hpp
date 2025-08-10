#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class ShadowRoot;

/// Dictionary type GetComposedRangesOptions
/// [`GetComposedRangesOptions`](https://developer.mozilla.org/en-US/docs/Web/API/GetComposedRangesOptions)
class GetComposedRangesOptions : public emlite::Val {
  explicit GetComposedRangesOptions(Handle h) noexcept;
public:
    static GetComposedRangesOptions take_ownership(Handle h) noexcept;
    explicit GetComposedRangesOptions(const emlite::Val &val) noexcept;
    GetComposedRangesOptions() noexcept;
    [[nodiscard]] GetComposedRangesOptions clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<ShadowRoot> shadowRoots() const;
    void shadowRoots(const jsbind::TypedArray<ShadowRoot>& value);
};

} // namespace webbind