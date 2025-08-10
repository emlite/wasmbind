#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

/// Dictionary type PromiseRejectionEventInit
/// [`PromiseRejectionEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/PromiseRejectionEventInit)
class PromiseRejectionEventInit : public EventInit {
  explicit PromiseRejectionEventInit(Handle h) noexcept;
public:
    static PromiseRejectionEventInit take_ownership(Handle h) noexcept;
    explicit PromiseRejectionEventInit(const emlite::Val &val) noexcept;
    PromiseRejectionEventInit() noexcept;
    [[nodiscard]] PromiseRejectionEventInit clone() const noexcept;
    [[nodiscard]] jsbind::Object promise() const;
    void promise(const jsbind::Object& value);
    [[nodiscard]] jsbind::Any reason() const;
    void reason(const jsbind::Any& value);
};

} // namespace webbind