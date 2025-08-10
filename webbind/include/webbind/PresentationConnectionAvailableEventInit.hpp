#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class PresentationConnection;

/// Dictionary type PresentationConnectionAvailableEventInit
class PresentationConnectionAvailableEventInit : public EventInit {
  explicit PresentationConnectionAvailableEventInit(Handle h) noexcept;
public:
    static PresentationConnectionAvailableEventInit take_ownership(Handle h) noexcept;
    explicit PresentationConnectionAvailableEventInit(const emlite::Val &val) noexcept;
    PresentationConnectionAvailableEventInit() noexcept;
    [[nodiscard]] PresentationConnectionAvailableEventInit clone() const noexcept;
    /// Getter of the `connection` attribute.
    [[nodiscard]] PresentationConnection connection() const;
    /// Setter of the `connection` attribute.
    void connection(const PresentationConnection& value);
};

} // namespace webbind