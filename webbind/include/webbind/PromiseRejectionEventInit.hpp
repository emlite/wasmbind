#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

/// Dictionary type PromiseRejectionEventInit
class PromiseRejectionEventInit : public EventInit {
  explicit PromiseRejectionEventInit(Handle h) noexcept;
public:
    static PromiseRejectionEventInit take_ownership(Handle h) noexcept;
    explicit PromiseRejectionEventInit(const emlite::Val &val) noexcept;
    PromiseRejectionEventInit() noexcept;
    [[nodiscard]] PromiseRejectionEventInit clone() const noexcept;
    /// Getter of the `promise` attribute.
    [[nodiscard]] jsbind::Object promise() const;
    /// Setter of the `promise` attribute.
    void promise(const jsbind::Object& value);
    /// Getter of the `reason` attribute.
    [[nodiscard]] jsbind::Any reason() const;
    /// Setter of the `reason` attribute.
    void reason(const jsbind::Any& value);
};

} // namespace webbind