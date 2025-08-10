#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class FormData;

/// Dictionary type FormDataEventInit
class FormDataEventInit : public EventInit {
  explicit FormDataEventInit(Handle h) noexcept;
public:
    static FormDataEventInit take_ownership(Handle h) noexcept;
    explicit FormDataEventInit(const emlite::Val &val) noexcept;
    FormDataEventInit() noexcept;
    [[nodiscard]] FormDataEventInit clone() const noexcept;
    /// Getter of the `formData` attribute.
    [[nodiscard]] FormData formData() const;
    /// Setter of the `formData` attribute.
    void formData(const FormData& value);
};

} // namespace webbind