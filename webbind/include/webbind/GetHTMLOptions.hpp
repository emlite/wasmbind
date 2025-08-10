#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class ShadowRoot;

/// Dictionary type GetHTMLOptions
/// [`GetHTMLOptions`](https://developer.mozilla.org/en-US/docs/Web/API/GetHTMLOptions)
class GetHTMLOptions : public emlite::Val {
  explicit GetHTMLOptions(Handle h) noexcept;
public:
    static GetHTMLOptions take_ownership(Handle h) noexcept;
    explicit GetHTMLOptions(const emlite::Val &val) noexcept;
    GetHTMLOptions() noexcept;
    [[nodiscard]] GetHTMLOptions clone() const noexcept;
    [[nodiscard]] bool serializableShadowRoots() const;
    void serializableShadowRoots(bool value);
    [[nodiscard]] jsbind::TypedArray<ShadowRoot> shadowRoots() const;
    void shadowRoots(const jsbind::TypedArray<ShadowRoot>& value);
};

} // namespace webbind