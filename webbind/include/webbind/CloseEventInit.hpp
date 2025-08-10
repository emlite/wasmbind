#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

/// Dictionary type CloseEventInit
class CloseEventInit : public EventInit {
  explicit CloseEventInit(Handle h) noexcept;
public:
    static CloseEventInit take_ownership(Handle h) noexcept;
    explicit CloseEventInit(const emlite::Val &val) noexcept;
    CloseEventInit() noexcept;
    [[nodiscard]] CloseEventInit clone() const noexcept;
    /// Getter of the `wasClean` attribute.
    [[nodiscard]] bool wasClean() const;
    /// Setter of the `wasClean` attribute.
    void wasClean(bool value);
    /// Getter of the `code` attribute.
    [[nodiscard]] unsigned short code() const;
    /// Setter of the `code` attribute.
    void code(unsigned short value);
    /// Getter of the `reason` attribute.
    [[nodiscard]] jsbind::String reason() const;
    /// Setter of the `reason` attribute.
    void reason(const jsbind::String& value);
};

} // namespace webbind