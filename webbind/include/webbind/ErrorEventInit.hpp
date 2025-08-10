#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

/// Dictionary type ErrorEventInit
/// [`ErrorEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/ErrorEventInit)
class ErrorEventInit : public EventInit {
  explicit ErrorEventInit(Handle h) noexcept;
public:
    static ErrorEventInit take_ownership(Handle h) noexcept;
    explicit ErrorEventInit(const emlite::Val &val) noexcept;
    ErrorEventInit() noexcept;
    [[nodiscard]] ErrorEventInit clone() const noexcept;
    [[nodiscard]] jsbind::String message() const;
    void message(const jsbind::String& value);
    [[nodiscard]] jsbind::String filename() const;
    void filename(const jsbind::String& value);
    [[nodiscard]] unsigned long lineno() const;
    void lineno(unsigned long value);
    [[nodiscard]] unsigned long colno() const;
    void colno(unsigned long value);
    [[nodiscard]] jsbind::Any error() const;
    void error(const jsbind::Any& value);
};

} // namespace webbind