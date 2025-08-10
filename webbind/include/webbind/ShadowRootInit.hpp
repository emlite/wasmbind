#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class CustomElementRegistry;

/// Dictionary type ShadowRootInit
class ShadowRootInit : public emlite::Val {
  explicit ShadowRootInit(Handle h) noexcept;
public:
    static ShadowRootInit take_ownership(Handle h) noexcept;
    explicit ShadowRootInit(const emlite::Val &val) noexcept;
    ShadowRootInit() noexcept;
    [[nodiscard]] ShadowRootInit clone() const noexcept;
    /// Getter of the `mode` attribute.
    [[nodiscard]] ShadowRootMode mode() const;
    /// Setter of the `mode` attribute.
    void mode(const ShadowRootMode& value);
    /// Getter of the `delegatesFocus` attribute.
    [[nodiscard]] bool delegatesFocus() const;
    /// Setter of the `delegatesFocus` attribute.
    void delegatesFocus(bool value);
    /// Getter of the `slotAssignment` attribute.
    [[nodiscard]] SlotAssignmentMode slotAssignment() const;
    /// Setter of the `slotAssignment` attribute.
    void slotAssignment(const SlotAssignmentMode& value);
    /// Getter of the `clonable` attribute.
    [[nodiscard]] bool clonable() const;
    /// Setter of the `clonable` attribute.
    void clonable(bool value);
    /// Getter of the `serializable` attribute.
    [[nodiscard]] bool serializable() const;
    /// Setter of the `serializable` attribute.
    void serializable(bool value);
    /// Getter of the `customElementRegistry` attribute.
    [[nodiscard]] CustomElementRegistry customElementRegistry() const;
    /// Setter of the `customElementRegistry` attribute.
    void customElementRegistry(const CustomElementRegistry& value);
};

} // namespace webbind