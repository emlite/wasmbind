#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

/// Dictionary type ErrorEventInit
class ErrorEventInit : public EventInit {
  explicit ErrorEventInit(Handle h) noexcept;
public:
    static ErrorEventInit take_ownership(Handle h) noexcept;
    explicit ErrorEventInit(const emlite::Val &val) noexcept;
    ErrorEventInit() noexcept;
    [[nodiscard]] ErrorEventInit clone() const noexcept;
    /// Getter of the `message` attribute.
    [[nodiscard]] jsbind::String message() const;
    /// Setter of the `message` attribute.
    void message(const jsbind::String& value);
    /// Getter of the `filename` attribute.
    [[nodiscard]] jsbind::String filename() const;
    /// Setter of the `filename` attribute.
    void filename(const jsbind::String& value);
    /// Getter of the `lineno` attribute.
    [[nodiscard]] unsigned long lineno() const;
    /// Setter of the `lineno` attribute.
    void lineno(unsigned long value);
    /// Getter of the `colno` attribute.
    [[nodiscard]] unsigned long colno() const;
    /// Setter of the `colno` attribute.
    void colno(unsigned long value);
    /// Getter of the `error` attribute.
    [[nodiscard]] jsbind::Any error() const;
    /// Setter of the `error` attribute.
    void error(const jsbind::Any& value);
};

} // namespace webbind