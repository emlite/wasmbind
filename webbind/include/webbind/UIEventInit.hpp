#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type UIEventInit
/// [`UIEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/UIEventInit)
class UIEventInit : public emlite::Val {
  explicit UIEventInit(Handle h) noexcept;
public:
    static UIEventInit take_ownership(Handle h) noexcept;
    explicit UIEventInit(const emlite::Val &val) noexcept;
    UIEventInit() noexcept;
    [[nodiscard]] UIEventInit clone() const noexcept;
    [[nodiscard]] unsigned long which() const;
    void which(unsigned long value);
};

} // namespace webbind