#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type GetAnimationsOptions
/// [`GetAnimationsOptions`](https://developer.mozilla.org/en-US/docs/Web/API/GetAnimationsOptions)
class GetAnimationsOptions : public emlite::Val {
  explicit GetAnimationsOptions(Handle h) noexcept;
public:
    static GetAnimationsOptions take_ownership(Handle h) noexcept;
    explicit GetAnimationsOptions(const emlite::Val &val) noexcept;
    GetAnimationsOptions() noexcept;
    [[nodiscard]] GetAnimationsOptions clone() const noexcept;
    [[nodiscard]] bool subtree() const;
    void subtree(bool value);
    [[nodiscard]] jsbind::String pseudoElement() const;
    void pseudoElement(const jsbind::String& value);
};

} // namespace webbind