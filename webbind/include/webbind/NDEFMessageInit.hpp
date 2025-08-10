#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class NDEFRecordInit;

/// Dictionary type NDEFMessageInit
class NDEFMessageInit : public emlite::Val {
  explicit NDEFMessageInit(Handle h) noexcept;
public:
    static NDEFMessageInit take_ownership(Handle h) noexcept;
    explicit NDEFMessageInit(const emlite::Val &val) noexcept;
    NDEFMessageInit() noexcept;
    [[nodiscard]] NDEFMessageInit clone() const noexcept;
    /// Getter of the `records` attribute.
    [[nodiscard]] jsbind::TypedArray<NDEFRecordInit> records() const;
    /// Setter of the `records` attribute.
    void records(const jsbind::TypedArray<NDEFRecordInit>& value);
};

} // namespace webbind