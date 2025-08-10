#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class FormData;

/// Dictionary type FormDataEventInit
/// [`FormDataEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/FormDataEventInit)
class FormDataEventInit : public EventInit {
  explicit FormDataEventInit(Handle h) noexcept;
public:
    static FormDataEventInit take_ownership(Handle h) noexcept;
    explicit FormDataEventInit(const emlite::Val &val) noexcept;
    FormDataEventInit() noexcept;
    [[nodiscard]] FormDataEventInit clone() const noexcept;
    [[nodiscard]] FormData formData() const;
    void formData(const FormData& value);
};

} // namespace webbind