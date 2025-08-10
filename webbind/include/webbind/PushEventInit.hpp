#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ExtendableEventInit.hpp"

namespace webbind {

/// Dictionary type PushEventInit
/// [`PushEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/PushEventInit)
class PushEventInit : public ExtendableEventInit {
  explicit PushEventInit(Handle h) noexcept;
public:
    static PushEventInit take_ownership(Handle h) noexcept;
    explicit PushEventInit(const emlite::Val &val) noexcept;
    PushEventInit() noexcept;
    [[nodiscard]] PushEventInit clone() const noexcept;
    [[nodiscard]] jsbind::Any data() const;
    void data(const jsbind::Any& value);
};

} // namespace webbind