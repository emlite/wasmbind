#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type HIDReportItem
class HIDReportItem : public emlite::Val {
  explicit HIDReportItem(Handle h) noexcept;
public:
    static HIDReportItem take_ownership(Handle h) noexcept;
    explicit HIDReportItem(const emlite::Val &val) noexcept;
    HIDReportItem() noexcept;
    [[nodiscard]] HIDReportItem clone() const noexcept;
    /// Getter of the `isAbsolute` attribute.
    [[nodiscard]] bool isAbsolute() const;
    /// Setter of the `isAbsolute` attribute.
    void isAbsolute(bool value);
    /// Getter of the `isArray` attribute.
    [[nodiscard]] bool isArray() const;
    /// Setter of the `isArray` attribute.
    void isArray(bool value);
    /// Getter of the `isBufferedBytes` attribute.
    [[nodiscard]] bool isBufferedBytes() const;
    /// Setter of the `isBufferedBytes` attribute.
    void isBufferedBytes(bool value);
    /// Getter of the `isConstant` attribute.
    [[nodiscard]] bool isConstant() const;
    /// Setter of the `isConstant` attribute.
    void isConstant(bool value);
    /// Getter of the `isLinear` attribute.
    [[nodiscard]] bool isLinear() const;
    /// Setter of the `isLinear` attribute.
    void isLinear(bool value);
    /// Getter of the `isRange` attribute.
    [[nodiscard]] bool isRange() const;
    /// Setter of the `isRange` attribute.
    void isRange(bool value);
    /// Getter of the `isVolatile` attribute.
    [[nodiscard]] bool isVolatile() const;
    /// Setter of the `isVolatile` attribute.
    void isVolatile(bool value);
    /// Getter of the `hasNull` attribute.
    [[nodiscard]] bool hasNull() const;
    /// Setter of the `hasNull` attribute.
    void hasNull(bool value);
    /// Getter of the `hasPreferredState` attribute.
    [[nodiscard]] bool hasPreferredState() const;
    /// Setter of the `hasPreferredState` attribute.
    void hasPreferredState(bool value);
    /// Getter of the `wrap` attribute.
    [[nodiscard]] bool wrap() const;
    /// Setter of the `wrap` attribute.
    void wrap(bool value);
    /// Getter of the `usages` attribute.
    [[nodiscard]] jsbind::TypedArray<unsigned long> usages() const;
    /// Setter of the `usages` attribute.
    void usages(jsbind::TypedArray<unsigned long> value);
    /// Getter of the `usageMinimum` attribute.
    [[nodiscard]] unsigned long usageMinimum() const;
    /// Setter of the `usageMinimum` attribute.
    void usageMinimum(unsigned long value);
    /// Getter of the `usageMaximum` attribute.
    [[nodiscard]] unsigned long usageMaximum() const;
    /// Setter of the `usageMaximum` attribute.
    void usageMaximum(unsigned long value);
    /// Getter of the `reportSize` attribute.
    [[nodiscard]] unsigned short reportSize() const;
    /// Setter of the `reportSize` attribute.
    void reportSize(unsigned short value);
    /// Getter of the `reportCount` attribute.
    [[nodiscard]] unsigned short reportCount() const;
    /// Setter of the `reportCount` attribute.
    void reportCount(unsigned short value);
    /// Getter of the `unitExponent` attribute.
    [[nodiscard]] char unitExponent() const;
    /// Setter of the `unitExponent` attribute.
    void unitExponent(char value);
    /// Getter of the `unitSystem` attribute.
    [[nodiscard]] HIDUnitSystem unitSystem() const;
    /// Setter of the `unitSystem` attribute.
    void unitSystem(const HIDUnitSystem& value);
    /// Getter of the `unitFactorLengthExponent` attribute.
    [[nodiscard]] char unitFactorLengthExponent() const;
    /// Setter of the `unitFactorLengthExponent` attribute.
    void unitFactorLengthExponent(char value);
    /// Getter of the `unitFactorMassExponent` attribute.
    [[nodiscard]] char unitFactorMassExponent() const;
    /// Setter of the `unitFactorMassExponent` attribute.
    void unitFactorMassExponent(char value);
    /// Getter of the `unitFactorTimeExponent` attribute.
    [[nodiscard]] char unitFactorTimeExponent() const;
    /// Setter of the `unitFactorTimeExponent` attribute.
    void unitFactorTimeExponent(char value);
    /// Getter of the `unitFactorTemperatureExponent` attribute.
    [[nodiscard]] char unitFactorTemperatureExponent() const;
    /// Setter of the `unitFactorTemperatureExponent` attribute.
    void unitFactorTemperatureExponent(char value);
    /// Getter of the `unitFactorCurrentExponent` attribute.
    [[nodiscard]] char unitFactorCurrentExponent() const;
    /// Setter of the `unitFactorCurrentExponent` attribute.
    void unitFactorCurrentExponent(char value);
    /// Getter of the `unitFactorLuminousIntensityExponent` attribute.
    [[nodiscard]] char unitFactorLuminousIntensityExponent() const;
    /// Setter of the `unitFactorLuminousIntensityExponent` attribute.
    void unitFactorLuminousIntensityExponent(char value);
    /// Getter of the `logicalMinimum` attribute.
    [[nodiscard]] long logicalMinimum() const;
    /// Setter of the `logicalMinimum` attribute.
    void logicalMinimum(long value);
    /// Getter of the `logicalMaximum` attribute.
    [[nodiscard]] long logicalMaximum() const;
    /// Setter of the `logicalMaximum` attribute.
    void logicalMaximum(long value);
    /// Getter of the `physicalMinimum` attribute.
    [[nodiscard]] long physicalMinimum() const;
    /// Setter of the `physicalMinimum` attribute.
    void physicalMinimum(long value);
    /// Getter of the `physicalMaximum` attribute.
    [[nodiscard]] long physicalMaximum() const;
    /// Setter of the `physicalMaximum` attribute.
    void physicalMaximum(long value);
    /// Getter of the `strings` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::String> strings() const;
    /// Setter of the `strings` attribute.
    void strings(const jsbind::TypedArray<jsbind::String>& value);
};

} // namespace webbind