#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"
#include "NDEFMessageInit.hpp"

namespace webbind {

/// Dictionary type NDEFReadingEventInit
/// [`NDEFReadingEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/NDEFReadingEventInit)
class NDEFReadingEventInit : public EventInit {
  explicit NDEFReadingEventInit(Handle h) noexcept;
public:
    static NDEFReadingEventInit take_ownership(Handle h) noexcept;
    explicit NDEFReadingEventInit(const emlite::Val &val) noexcept;
    NDEFReadingEventInit() noexcept;
    [[nodiscard]] NDEFReadingEventInit clone() const noexcept;
    [[nodiscard]] jsbind::String serialNumber() const;
    void serialNumber(const jsbind::String& value);
    [[nodiscard]] NDEFMessageInit message() const;
    void message(const NDEFMessageInit& value);
};

} // namespace webbind