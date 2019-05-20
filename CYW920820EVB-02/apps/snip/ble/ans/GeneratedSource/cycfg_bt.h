/***************************************************************************//**
* File Name: cycfg_bt.h
* Version: 1.1
*
* Description:
* Bluetooth Configurator configuration.
* This file should not be modified. It was automatically generated by
* Bluetooth Configurator 1.1.0 build 89
*
********************************************************************************
* Copyright 2019, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#ifndef WICED_BT_CFG_H
#define WICED_BT_CFG_H

/*
BLE_CONFIG_START
<?xml version="1.0"?>
<Configuration major="1" minor="1" device="WICED">
    <Profiles>
        <Profile name="GATT">
            <ProfileRoles>
                <ProfileRole type="Server">
                    <ProfileRoleProperties>
                        <Property id="Name" value="Server"/>
                    </ProfileRoleProperties>
                    <Services>
                        <Service type="org.bluetooth.service.generic_access">
                            <ServiceProperties>
                                <Property id="EntityID" value="{72d46284-a00a-4d0c-8dd7-8b3d2ea783c1}"/>
                                <Property id="ServiceDeclaration" value="Primary"/>
                            </ServiceProperties>
                            <Characteristics>
                                <Characteristic type="org.bluetooth.characteristic.gap.device_name">
                                    <Fields>
                                        <Field>
                                            <FieldProperties>
                                                <Property id="Name" value="Name"/>
                                                <Property id="Value" value="ANC"/>
                                                <Property id="Format" value="f_utf8s"/>
                                                <Property id="ByteLength" value="3"/>
                                            </FieldProperties>
                                        </Field>
                                    </Fields>
                                    <Properties>
                                        <BleProperty>
                                            <Property id="PropertyType" value="Read"/>
                                            <Property id="Present" value="true"/>
                                            <Property id="Mandatory" value="true"/>
                                        </BleProperty>
                                        <BleProperty>
                                            <Property id="PropertyType" value="Write"/>
                                            <Property id="Present" value="false"/>
                                            <Property id="Mandatory" value="false"/>
                                        </BleProperty>
                                    </Properties>
                                    <Permission>
                                        <Property id="Read" value="true"/>
                                        <Property id="ReadAuthenticated" value="false"/>
                                        <Property id="VariableLength" value="false"/>
                                        <Property id="Write" value="false"/>
                                        <Property id="WriteNoResponse" value="false"/>
                                        <Property id="WriteAuthenticated" value="false"/>
                                        <Property id="WriteReliable" value="false"/>
                                    </Permission>
                                    <Descriptors/>
                                </Characteristic>
                                <Characteristic type="org.bluetooth.characteristic.gap.appearance">
                                    <Fields>
                                        <Field>
                                            <FieldProperties>
                                                <Property id="Name" value="Category"/>
                                                <Property id="EnumValue" value="512"/>
                                                <Property id="Format" value="f_16bit"/>
                                            </FieldProperties>
                                        </Field>
                                    </Fields>
                                    <Properties>
                                        <BleProperty>
                                            <Property id="PropertyType" value="Read"/>
                                            <Property id="Present" value="true"/>
                                            <Property id="Mandatory" value="true"/>
                                        </BleProperty>
                                    </Properties>
                                    <Permission>
                                        <Property id="Read" value="true"/>
                                        <Property id="ReadAuthenticated" value="false"/>
                                        <Property id="VariableLength" value="false"/>
                                        <Property id="Write" value="false"/>
                                        <Property id="WriteNoResponse" value="false"/>
                                        <Property id="WriteAuthenticated" value="false"/>
                                        <Property id="WriteReliable" value="false"/>
                                    </Permission>
                                    <Descriptors/>
                                </Characteristic>
                            </Characteristics>
                        </Service>
                        <Service type="org.bluetooth.service.generic_attribute">
                            <ServiceProperties>
                                <Property id="EntityID" value="{8bcf0c44-f442-4023-8e8a-45e81061125c}"/>
                                <Property id="ServiceDeclaration" value="Primary"/>
                            </ServiceProperties>
                            <Characteristics/>
                        </Service>
                        <Service type="org.bluetooth.service.alert_notification">
                            <ServiceProperties>
                                <Property id="EntityID" value="{00fe9997-1c26-4c36-a6cd-9e2cb3a19b69}"/>
                                <Property id="ServiceDeclaration" value="Primary"/>
                            </ServiceProperties>
                            <Characteristics>
                                <Characteristic type="org.bluetooth.characteristic.supported_new_alert_category">
                                    <Fields>
                                        <Field>
                                            <FieldProperties>
                                                <Property id="Name" value="Category ID Bit Mask 0"/>
                                                <Property id="Value" value=""/>
                                                <Property id="Format" value="f_uint8"/>
                                            </FieldProperties>
                                            <BitField>
                                                <Property id="BitValue" value="0"/>
                                                <Property id="BitValue" value="0"/>
                                                <Property id="BitValue" value="0"/>
                                                <Property id="BitValue" value="0"/>
                                                <Property id="BitValue" value="0"/>
                                                <Property id="BitValue" value="0"/>
                                                <Property id="BitValue" value="0"/>
                                                <Property id="BitValue" value="0"/>
                                            </BitField>
                                        </Field>
                                        <Field>
                                            <FieldProperties>
                                                <Property id="Name" value="Category ID Bit Mask 1"/>
                                                <Property id="Value" value=""/>
                                                <Property id="Format" value="f_uint8"/>
                                            </FieldProperties>
                                            <BitField>
                                                <Property id="BitValue" value="0"/>
                                                <Property id="BitValue" value="0"/>
                                            </BitField>
                                        </Field>
                                    </Fields>
                                    <Properties>
                                        <BleProperty>
                                            <Property id="PropertyType" value="Read"/>
                                            <Property id="Present" value="true"/>
                                            <Property id="Mandatory" value="true"/>
                                        </BleProperty>
                                    </Properties>
                                    <Permission>
                                        <Property id="Read" value="true"/>
                                        <Property id="ReadAuthenticated" value="false"/>
                                        <Property id="VariableLength" value="false"/>
                                        <Property id="Write" value="false"/>
                                        <Property id="WriteNoResponse" value="false"/>
                                        <Property id="WriteAuthenticated" value="false"/>
                                        <Property id="WriteReliable" value="false"/>
                                    </Permission>
                                    <Descriptors/>
                                </Characteristic>
                                <Characteristic type="org.bluetooth.characteristic.new_alert">
                                    <Fields>
                                        <Field>
                                            <FieldProperties>
                                                <Property id="Name" value="Category ID"/>
                                                <Property id="EnumValue" value="0"/>
                                                <Property id="Format" value="f_uint8"/>
                                            </FieldProperties>
                                        </Field>
                                        <Field>
                                            <FieldProperties>
                                                <Property id="Name" value="Number of New Alert"/>
                                                <Property id="Value" value=""/>
                                                <Property id="Format" value="f_uint8"/>
                                            </FieldProperties>
                                        </Field>
                                        <Field>
                                            <FieldProperties>
                                                <Property id="Name" value="Text String Information"/>
                                                <Property id="Value" value=""/>
                                                <Property id="Format" value="f_utf8s"/>
                                                <Property id="ByteLength" value="0"/>
                                            </FieldProperties>
                                        </Field>
                                    </Fields>
                                    <Properties>
                                        <BleProperty>
                                            <Property id="PropertyType" value="Notify"/>
                                            <Property id="Present" value="true"/>
                                            <Property id="Mandatory" value="true"/>
                                        </BleProperty>
                                    </Properties>
                                    <Permission>
                                        <Property id="Read" value="false"/>
                                        <Property id="ReadAuthenticated" value="false"/>
                                        <Property id="VariableLength" value="false"/>
                                        <Property id="Write" value="false"/>
                                        <Property id="WriteNoResponse" value="false"/>
                                        <Property id="WriteAuthenticated" value="false"/>
                                        <Property id="WriteReliable" value="false"/>
                                    </Permission>
                                    <Descriptors>
                                        <Descriptor type="org.bluetooth.descriptor.gatt.client_characteristic_configuration">
                                            <Fields>
                                                <Field>
                                                    <FieldProperties>
                                                        <Property id="Name" value="Properties"/>
                                                        <Property id="Value" value=""/>
                                                        <Property id="Format" value="f_16bit"/>
                                                    </FieldProperties>
                                                    <BitField>
                                                        <Property id="BitValue" value="0"/>
                                                        <Property id="BitValue" value="0"/>
                                                    </BitField>
                                                </Field>
                                            </Fields>
                                            <Properties>
                                                <BleProperty>
                                                    <Property id="PropertyType" value="Read"/>
                                                    <Property id="Present" value="true"/>
                                                    <Property id="Mandatory" value="true"/>
                                                </BleProperty>
                                                <BleProperty>
                                                    <Property id="PropertyType" value="Write"/>
                                                    <Property id="Present" value="true"/>
                                                    <Property id="Mandatory" value="true"/>
                                                </BleProperty>
                                            </Properties>
                                        </Descriptor>
                                    </Descriptors>
                                </Characteristic>
                                <Characteristic type="org.bluetooth.characteristic.supported_unread_alert_category">
                                    <Fields>
                                        <Field>
                                            <FieldProperties>
                                                <Property id="Name" value="Category ID Bit Mask 0"/>
                                                <Property id="Value" value=""/>
                                                <Property id="Format" value="f_uint8"/>
                                            </FieldProperties>
                                            <BitField>
                                                <Property id="BitValue" value="0"/>
                                                <Property id="BitValue" value="0"/>
                                                <Property id="BitValue" value="0"/>
                                                <Property id="BitValue" value="0"/>
                                                <Property id="BitValue" value="0"/>
                                                <Property id="BitValue" value="0"/>
                                                <Property id="BitValue" value="0"/>
                                                <Property id="BitValue" value="0"/>
                                            </BitField>
                                        </Field>
                                        <Field>
                                            <FieldProperties>
                                                <Property id="Name" value="Category ID Bit Mask 1"/>
                                                <Property id="Value" value=""/>
                                                <Property id="Format" value="f_uint8"/>
                                            </FieldProperties>
                                            <BitField>
                                                <Property id="BitValue" value="0"/>
                                                <Property id="BitValue" value="0"/>
                                            </BitField>
                                        </Field>
                                    </Fields>
                                    <Properties>
                                        <BleProperty>
                                            <Property id="PropertyType" value="Read"/>
                                            <Property id="Present" value="true"/>
                                            <Property id="Mandatory" value="true"/>
                                        </BleProperty>
                                    </Properties>
                                    <Permission>
                                        <Property id="Read" value="true"/>
                                        <Property id="ReadAuthenticated" value="false"/>
                                        <Property id="VariableLength" value="false"/>
                                        <Property id="Write" value="false"/>
                                        <Property id="WriteNoResponse" value="false"/>
                                        <Property id="WriteAuthenticated" value="false"/>
                                        <Property id="WriteReliable" value="false"/>
                                    </Permission>
                                    <Descriptors/>
                                </Characteristic>
                                <Characteristic type="org.bluetooth.characteristic.unread_alert_status">
                                    <Fields>
                                        <Field>
                                            <FieldProperties>
                                                <Property id="Name" value="Category ID"/>
                                                <Property id="EnumValue" value="0"/>
                                                <Property id="Format" value="f_uint8"/>
                                            </FieldProperties>
                                        </Field>
                                        <Field>
                                            <FieldProperties>
                                                <Property id="Name" value="Unread count"/>
                                                <Property id="Value" value=""/>
                                                <Property id="Format" value="f_uint8"/>
                                            </FieldProperties>
                                        </Field>
                                    </Fields>
                                    <Properties>
                                        <BleProperty>
                                            <Property id="PropertyType" value="Notify"/>
                                            <Property id="Present" value="true"/>
                                            <Property id="Mandatory" value="true"/>
                                        </BleProperty>
                                    </Properties>
                                    <Permission>
                                        <Property id="Read" value="false"/>
                                        <Property id="ReadAuthenticated" value="false"/>
                                        <Property id="VariableLength" value="false"/>
                                        <Property id="Write" value="false"/>
                                        <Property id="WriteNoResponse" value="false"/>
                                        <Property id="WriteAuthenticated" value="false"/>
                                        <Property id="WriteReliable" value="false"/>
                                    </Permission>
                                    <Descriptors>
                                        <Descriptor type="org.bluetooth.descriptor.gatt.client_characteristic_configuration">
                                            <Fields>
                                                <Field>
                                                    <FieldProperties>
                                                        <Property id="Name" value="Properties"/>
                                                        <Property id="Value" value=""/>
                                                        <Property id="Format" value="f_16bit"/>
                                                    </FieldProperties>
                                                    <BitField>
                                                        <Property id="BitValue" value="0"/>
                                                        <Property id="BitValue" value="0"/>
                                                    </BitField>
                                                </Field>
                                            </Fields>
                                            <Properties>
                                                <BleProperty>
                                                    <Property id="PropertyType" value="Read"/>
                                                    <Property id="Present" value="true"/>
                                                    <Property id="Mandatory" value="true"/>
                                                </BleProperty>
                                                <BleProperty>
                                                    <Property id="PropertyType" value="Write"/>
                                                    <Property id="Present" value="true"/>
                                                    <Property id="Mandatory" value="true"/>
                                                </BleProperty>
                                            </Properties>
                                        </Descriptor>
                                    </Descriptors>
                                </Characteristic>
                                <Characteristic type="org.bluetooth.characteristic.alert_notification_control_point">
                                    <Fields>
                                        <Field>
                                            <FieldProperties>
                                                <Property id="Name" value="Command ID"/>
                                                <Property id="EnumValue" value="0"/>
                                                <Property id="Format" value="f_uint8"/>
                                            </FieldProperties>
                                        </Field>
                                        <Field>
                                            <FieldProperties>
                                                <Property id="Name" value="Category ID"/>
                                                <Property id="EnumValue" value="0"/>
                                                <Property id="Format" value="f_uint8"/>
                                            </FieldProperties>
                                        </Field>
                                    </Fields>
                                    <Properties>
                                        <BleProperty>
                                            <Property id="PropertyType" value="Write"/>
                                            <Property id="Present" value="true"/>
                                            <Property id="Mandatory" value="true"/>
                                        </BleProperty>
                                    </Properties>
                                    <Permission>
                                        <Property id="Read" value="false"/>
                                        <Property id="ReadAuthenticated" value="false"/>
                                        <Property id="VariableLength" value="false"/>
                                        <Property id="Write" value="true"/>
                                        <Property id="WriteNoResponse" value="false"/>
                                        <Property id="WriteAuthenticated" value="false"/>
                                        <Property id="WriteReliable" value="false"/>
                                    </Permission>
                                    <Descriptors/>
                                </Characteristic>
                            </Characteristics>
                        </Service>
                    </Services>
                </ProfileRole>
            </ProfileRoles>
        </Profile>
    </Profiles>
</Configuration>
BLE_CONFIG_END
*/

#endif /* WICED_BT_CFG_H */

/* [] END OF FILE */
