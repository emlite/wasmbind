#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class CustomElementRegistry;

/// Dictionary type ShadowRootInit
/// [`ShadowRootInit`](https://developer.mozilla.org/en-US/docs/Web/API/ShadowRootInit)
class ShadowRootInit : public emlite::Val {
  explicit ShadowRootInit(Handle h) noexcept;
public:
    static ShadowRootInit take_ownership(Handle h) noexcept;
    explicit ShadowRootInit(const emlite::Val &val) noexcept;
    ShadowRootInit() noexcept;
    [[nodiscard]] ShadowRootInit clone() const noexcept;
    [[nodiscard]] ShadowRootMode mode() const;
    void mode(const ShadowRootMode& value);
    [[nodiscard]] bool delegatesFocus() const;
    void delegatesFocus(bool value);
    [[nodiscard]] SlotAssignmentMode slotAssignment() const;
    void slotAssignment(const SlotAssignmentMode& value);
    [[nodiscard]] bool clonable() const;
    void clonable(bool value);
    [[nodiscard]] bool serializable() const;
    void serializable(bool value);
    [[nodiscard]] CustomElementRegistry customElementRegistry() const;
    void customElementRegistry(const CustomElementRegistry& value);
};

} // namespace webbind