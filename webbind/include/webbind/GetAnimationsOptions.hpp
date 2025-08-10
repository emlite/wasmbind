#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type GetAnimationsOptions
class GetAnimationsOptions : public emlite::Val {
  explicit GetAnimationsOptions(Handle h) noexcept;
public:
    static GetAnimationsOptions take_ownership(Handle h) noexcept;
    explicit GetAnimationsOptions(const emlite::Val &val) noexcept;
    GetAnimationsOptions() noexcept;
    [[nodiscard]] GetAnimationsOptions clone() const noexcept;
    /// Getter of the `subtree` attribute.
    [[nodiscard]] bool subtree() const;
    /// Setter of the `subtree` attribute.
    void subtree(bool value);
    /// Getter of the `pseudoElement` attribute.
    [[nodiscard]] jsbind::String pseudoElement() const;
    /// Setter of the `pseudoElement` attribute.
    void pseudoElement(const jsbind::String& value);
};

} // namespace webbind