#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "FilePickerOptions.hpp"

namespace webbind {

/// Dictionary type SaveFilePickerOptions
class SaveFilePickerOptions : public FilePickerOptions {
  explicit SaveFilePickerOptions(Handle h) noexcept;
public:
    static SaveFilePickerOptions take_ownership(Handle h) noexcept;
    explicit SaveFilePickerOptions(const emlite::Val &val) noexcept;
    SaveFilePickerOptions() noexcept;
    [[nodiscard]] SaveFilePickerOptions clone() const noexcept;
    /// Getter of the `suggestedName` attribute.
    [[nodiscard]] jsbind::String suggestedName() const;
    /// Setter of the `suggestedName` attribute.
    void suggestedName(const jsbind::String& value);
};

} // namespace webbind