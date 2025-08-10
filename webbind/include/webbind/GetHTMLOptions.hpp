#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class ShadowRoot;

/// Dictionary type GetHTMLOptions
class GetHTMLOptions : public emlite::Val {
  explicit GetHTMLOptions(Handle h) noexcept;
public:
    static GetHTMLOptions take_ownership(Handle h) noexcept;
    explicit GetHTMLOptions(const emlite::Val &val) noexcept;
    GetHTMLOptions() noexcept;
    [[nodiscard]] GetHTMLOptions clone() const noexcept;
    /// Getter of the `serializableShadowRoots` attribute.
    [[nodiscard]] bool serializableShadowRoots() const;
    /// Setter of the `serializableShadowRoots` attribute.
    void serializableShadowRoots(bool value);
    /// Getter of the `shadowRoots` attribute.
    [[nodiscard]] jsbind::TypedArray<ShadowRoot> shadowRoots() const;
    /// Setter of the `shadowRoots` attribute.
    void shadowRoots(const jsbind::TypedArray<ShadowRoot>& value);
};

} // namespace webbind