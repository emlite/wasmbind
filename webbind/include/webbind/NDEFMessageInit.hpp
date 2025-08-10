#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "NDEFRecordInit.hpp"

namespace webbind {

/// Dictionary type NDEFMessageInit
/// [`NDEFMessageInit`](https://developer.mozilla.org/en-US/docs/Web/API/NDEFMessageInit)
class NDEFMessageInit : public emlite::Val {
  explicit NDEFMessageInit(Handle h) noexcept;
public:
    static NDEFMessageInit take_ownership(Handle h) noexcept;
    explicit NDEFMessageInit(const emlite::Val &val) noexcept;
    NDEFMessageInit() noexcept;
    [[nodiscard]] NDEFMessageInit clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<NDEFRecordInit> records() const;
    void records(const jsbind::TypedArray<NDEFRecordInit>& value);
};

} // namespace webbind