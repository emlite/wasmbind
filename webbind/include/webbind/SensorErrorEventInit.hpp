#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class DOMException;

/// Dictionary type SensorErrorEventInit
/// [`SensorErrorEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/SensorErrorEventInit)
class SensorErrorEventInit : public EventInit {
  explicit SensorErrorEventInit(Handle h) noexcept;
public:
    static SensorErrorEventInit take_ownership(Handle h) noexcept;
    explicit SensorErrorEventInit(const emlite::Val &val) noexcept;
    SensorErrorEventInit() noexcept;
    [[nodiscard]] SensorErrorEventInit clone() const noexcept;
    [[nodiscard]] DOMException error() const;
    void error(const DOMException& value);
};

} // namespace webbind