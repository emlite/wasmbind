#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type FilePickerAcceptType
class FilePickerAcceptType : public emlite::Val {
  explicit FilePickerAcceptType(Handle h) noexcept;
public:
    static FilePickerAcceptType take_ownership(Handle h) noexcept;
    explicit FilePickerAcceptType(const emlite::Val &val) noexcept;
    FilePickerAcceptType() noexcept;
    [[nodiscard]] FilePickerAcceptType clone() const noexcept;
    /// Getter of the `description` attribute.
    [[nodiscard]] jsbind::String description() const;
    /// Setter of the `description` attribute.
    void description(const jsbind::String& value);
    /// Getter of the `accept` attribute.
    [[nodiscard]] jsbind::Record<jsbind::String, jsbind::Any> accept() const;
    /// Setter of the `accept` attribute.
    void accept(const jsbind::Record<jsbind::String, jsbind::Any>& value);
};

} // namespace webbind