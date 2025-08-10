#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class NDEFMessageInit;

/// Dictionary type NDEFReadingEventInit
class NDEFReadingEventInit : public EventInit {
  explicit NDEFReadingEventInit(Handle h) noexcept;
public:
    static NDEFReadingEventInit take_ownership(Handle h) noexcept;
    explicit NDEFReadingEventInit(const emlite::Val &val) noexcept;
    NDEFReadingEventInit() noexcept;
    [[nodiscard]] NDEFReadingEventInit clone() const noexcept;
    /// Getter of the `serialNumber` attribute.
    [[nodiscard]] jsbind::String serialNumber() const;
    /// Setter of the `serialNumber` attribute.
    void serialNumber(const jsbind::String& value);
    /// Getter of the `message` attribute.
    [[nodiscard]] NDEFMessageInit message() const;
    /// Setter of the `message` attribute.
    void message(const NDEFMessageInit& value);
};

} // namespace webbind