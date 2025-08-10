#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type HIDReportItem
/// [`HIDReportItem`](https://developer.mozilla.org/en-US/docs/Web/API/HIDReportItem)
class HIDReportItem : public emlite::Val {
  explicit HIDReportItem(Handle h) noexcept;
public:
    static HIDReportItem take_ownership(Handle h) noexcept;
    explicit HIDReportItem(const emlite::Val &val) noexcept;
    HIDReportItem() noexcept;
    [[nodiscard]] HIDReportItem clone() const noexcept;
    [[nodiscard]] bool isAbsolute() const;
    void isAbsolute(bool value);
    [[nodiscard]] bool isArray() const;
    void isArray(bool value);
    [[nodiscard]] bool isBufferedBytes() const;
    void isBufferedBytes(bool value);
    [[nodiscard]] bool isConstant() const;
    void isConstant(bool value);
    [[nodiscard]] bool isLinear() const;
    void isLinear(bool value);
    [[nodiscard]] bool isRange() const;
    void isRange(bool value);
    [[nodiscard]] bool isVolatile() const;
    void isVolatile(bool value);
    [[nodiscard]] bool hasNull() const;
    void hasNull(bool value);
    [[nodiscard]] bool hasPreferredState() const;
    void hasPreferredState(bool value);
    [[nodiscard]] bool wrap() const;
    void wrap(bool value);
    [[nodiscard]] jsbind::TypedArray<unsigned long> usages() const;
    void usages(jsbind::TypedArray<unsigned long> value);
    [[nodiscard]] unsigned long usageMinimum() const;
    void usageMinimum(unsigned long value);
    [[nodiscard]] unsigned long usageMaximum() const;
    void usageMaximum(unsigned long value);
    [[nodiscard]] unsigned short reportSize() const;
    void reportSize(unsigned short value);
    [[nodiscard]] unsigned short reportCount() const;
    void reportCount(unsigned short value);
    [[nodiscard]] char unitExponent() const;
    void unitExponent(char value);
    [[nodiscard]] HIDUnitSystem unitSystem() const;
    void unitSystem(const HIDUnitSystem& value);
    [[nodiscard]] char unitFactorLengthExponent() const;
    void unitFactorLengthExponent(char value);
    [[nodiscard]] char unitFactorMassExponent() const;
    void unitFactorMassExponent(char value);
    [[nodiscard]] char unitFactorTimeExponent() const;
    void unitFactorTimeExponent(char value);
    [[nodiscard]] char unitFactorTemperatureExponent() const;
    void unitFactorTemperatureExponent(char value);
    [[nodiscard]] char unitFactorCurrentExponent() const;
    void unitFactorCurrentExponent(char value);
    [[nodiscard]] char unitFactorLuminousIntensityExponent() const;
    void unitFactorLuminousIntensityExponent(char value);
    [[nodiscard]] long logicalMinimum() const;
    void logicalMinimum(long value);
    [[nodiscard]] long logicalMaximum() const;
    void logicalMaximum(long value);
    [[nodiscard]] long physicalMinimum() const;
    void physicalMinimum(long value);
    [[nodiscard]] long physicalMaximum() const;
    void physicalMaximum(long value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> strings() const;
    void strings(const jsbind::TypedArray<jsbind::String>& value);
};

} // namespace webbind