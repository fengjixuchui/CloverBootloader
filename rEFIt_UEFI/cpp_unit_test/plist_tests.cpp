#include <Platform.h> // Only use angled for Platform, else, xcode project won't compile
#include "../cpp_foundation/XString.h"
#include "../cpp_foundation/unicode_conversions.h"
#include "../Platform/plist/plist.h"

#ifndef _MSC_VER
const char* config_all =
"<?xml version=\"1.0\" encoding=\"UTF-8\"?> \
<!DOCTYPE plist PUBLIC \"-//Apple//DTD PLIST 1.0//EN\" \"http://www.apple.com/DTDs/PropertyList-1.0.dtd\"> \
<plist version=\"1.0\"> \
<dict> \
  <key>Test null data</key> \
  <data></data> \
  <dict> \
    <key>AutoMerge</key> \
    <true/> \
    <key>DSDT</key> \
    <dict> \
      <key>Debug</key> \
      <true/> \
      <key>DropOEM_DSM</key> \
      <dict> \
        <key>ATI</key> \
        <true/> \
        <key>Firewire</key> \
        <false/> \
        <key>HDA</key> \
        <false/> \
        <key>HDMI</key> \
        <false/> \
        <key>IDE</key> \
        <true/> \
        <key>IntelGFX</key> \
        <false/> \
        <key>LAN</key> \
        <false/> \
        <key>LPC</key> \
        <false/> \
        <key>NVidia</key> \
        <false/> \
        <key>SATA</key> \
        <false/> \
        <key>SmBUS</key> \
        <false/> \
        <key>USB</key> \
        <false/> \
        <key>WIFI</key> \
        <false/> \
      </dict> \
      <key>Fixes</key> \
      <dict> \
        <key>FixDarwin</key> \
        <true/> \
        <key>FixDisplay</key> \
        <true/> \
        <key>FixS3D</key> \
        <true/> \
      </dict> \
      <key>Name</key> \
      <string>aa</string> \
      <key>Patches</key> \
      <array> \
        <dict> \
          <key>Comment</key> \
          <string>ACPI1</string> \
          <key>Disabled</key> \
          <false/> \
          <key>Find</key> \
          <data> \
          AA== \
          </data> \
          <key>Replace</key> \
          <data> \
          AQ== \
          </data> \
        </dict> \
        <dict> \
          <key>Comment</key> \
          <string>ACPI2</string> \
          <key>Disabled</key> \
          <true/> \
          <key>Find</key> \
          <data> \
          Ag== \
          </data> \
          <key>Replace</key> \
          <data> \
          Aw== \
          </data> \
        </dict> \
        <dict> \
          <key>Comment</key> \
          <string>change EHC1 to EH01</string> \
          <key>Disabled</key> \
          <false/> \
          <key>Find</key> \
          <data> \
          RUhDMQ== \
          </data> \
          <key>Replace</key> \
          <data> \
          RUgwMQ== \
          </data> \
        </dict> \
      </array> \
      <key>ReuseFFFF</key> \
      <true/> \
      <key>Rtc8Allowed</key> \
      <true/> \
      <key>SlpSmiAtWake</key> \
      <true/> \
      <key>SuspendOverride</key> \
      <true/> \
    </dict> \
    <key>DisableAPSNAPLF</key> \
    <true/> \
    <key>DisableASPM</key> \
    <true/> \
    <key>DisabledAML</key> \
    <array> \
      <string>aa</string> \
      <string>bb</string> \
    </array> \
    <key>DropTables</key> \
    <array> \
      <dict> \
        <key>Signature</key> \
        <string>SSDT</string> \
        <key>TableId</key> \
        <string>CpuPm</string> \
      </dict> \
    </array> \
    <key>HaltEnabler</key> \
    <true/> \
    <key>PatchAPIC</key> \
    <true/> \
    <key>ResetAddress</key> \
    <string>01</string> \
    <key>ResetValue</key> \
    <string>02</string> \
    <key>SortedOrder</key> \
    <array> \
      <string>dd</string> \
      <string>cc</string> \
    </array> \
    <key>smartUPS</key> \
    <true/> \
  </dict> \
  <key>Boot</key> \
  <dict> \
    <key>Arguments</key> \
    <string>-v arch=i386 slide=0 dart=0 -xcpm darkwake=1 npci=0x2000 cpus=1 debug=0x100 aa</string> \
    <key>BlackList</key> \
    <array> \
      <string>hh</string> \
    </array> \
    <key>CustomLogo</key> \
    <string>Apple</string> \
    <key>Debug</key> \
    <true/> \
    <key>DefaultLoader</key> \
    <string>ii</string> \
    <key>DefaultVolume</key> \
    <string>LastBootedVolume</string> \
    <key>DisableCloverHotkeys</key> \
    <true/> \
    <key>HibernationFixup</key> \
    <true/> \
    <key>Legacy</key> \
    <string>LegacyBiosDefault</string> \
    <key>LegacyBiosDefaultEntry</key> \
    <integer>12</integer> \
    <key>NeverDoRecovery</key> \
    <true/> \
    <key>NeverHibernate</key> \
    <true/> \
    <key>NoEarlyProgress</key> \
    <true/> \
    <key>Policy</key> \
    <string>Allow</string> \
    <key>Secure</key> \
    <true/> \
    <key>SignatureFixup</key> \
    <true/> \
    <key>SkipHibernateTimeout</key> \
    <true/> \
    <key>StrictHibernate</key> \
    <true/> \
    <key>Timeout</key> \
    <integer>2</integer> \
    <key>WhiteList</key> \
    <array> \
      <string>ff</string> \
      <string>gg</string> \
    </array> \
    <key>XMPDetection</key> \
    <integer>1</integer> \
  </dict> \
  <key>BootGraphics</key> \
  <dict> \
    <key>DefaultBackgroundColor</key> \
    <string>0xF1F1F1</string> \
    <key>EFILoginHiDPI</key> \
    <integer>2</integer> \
    <key>UIScale</key> \
    <integer>4</integer> \
    <key>flagstate</key> \
    <integer>3</integer> \
  </dict> \
  <key>CPU</key> \
  <dict> \
    <key>BusSpeedkHz</key> \
    <integer>800</integer> \
    <key>C2</key> \
    <true/> \
    <key>C4</key> \
    <true/> \
    <key>C6</key> \
    <true/> \
    <key>FrequencyMHz</key> \
    <integer>2000</integer> \
    <key>HWPEnable</key> \
    <true/> \
    <key>HWPValue</key> \
    <string>0x7</string> \
    <key>Latency</key> \
    <string>0x3</string> \
    <key>QEMU</key> \
    <true/> \
    <key>QPI</key> \
    <integer>4</integer> \
    <key>TDP</key> \
    <integer>6</integer> \
    <key>TurboDisable</key> \
    <true/> \
    <key>Type</key> \
    <string>0x5</string> \
    <key>UseARTFrequency</key> \
    <true/> \
  </dict> \
  <key>Devices</key> \
  <dict> \
    <key>AddProperties</key> \
    <array> \
      <dict> \
        <key>Device</key> \
        <string>SATA</string> \
        <key>Disabled</key> \
        <false/> \
        <key>Key</key> \
        <string>10</string> \
        <key>Value</key> \
        <integer>11</integer> \
      </dict> \
      <dict> \
        <key>Device</key> \
        <string>LPC</string> \
        <key>Disabled</key> \
        <true/> \
        <key>Key</key> \
        <string>12</string> \
        <key>Value</key> \
        <integer>13</integer> \
      </dict> \
      <dict> \
        <key>Device</key> \
        <string>SmBUS</string> \
        <key>Disabled</key> \
        <false/> \
        <key>Key</key> \
        <string>kk</string> \
        <key>Value</key> \
        <string>ll</string> \
      </dict> \
      <dict> \
        <key>Device</key> \
        <string>Firewire</string> \
        <key>Disabled</key> \
        <false/> \
        <key>Key</key> \
        <string>14</string> \
        <key>Value</key> \
        <data> \
        FQ== \
        </data> \
      </dict> \
    </array> \
    <key>AirportBridgeDeviceName</key> \
    <string>airportbridge</string> \
    <key>Arbitrary</key> \
    <array> \
      <dict> \
        <key>Comment</key> \
        <string>C1</string> \
        <key>CustomProperties</key> \
        <array> \
          <dict> \
            <key>Disabled</key> \
            <false/> \
            <key>Key</key> \
            <string>ll</string> \
            <key>Value</key> \
            <string>mm</string> \
          </dict> \
          <dict> \
            <key>Disabled</key> \
            <true/> \
            <key>Key</key> \
            <string>nn</string> \
            <key>Value</key> \
            <integer>1</integer> \
          </dict> \
          <dict> \
            <key>Disabled</key> \
            <false/> \
            <key>Key</key> \
            <string>oo</string> \
            <key>Value</key> \
            <data> \
            Ag== \
            </data> \
          </dict> \
        </array> \
        <key>PciAddr</key> \
        <string>00:00.01</string> \
      </dict> \
    </array> \
    <key>Audio</key> \
    <dict> \
      <key>AFGLowPowerState</key> \
      <true/> \
      <key>Inject</key> \
      <string>Detect</string> \
      <key>ResetHDA</key> \
      <true/> \
    </dict> \
    <key>DisableFunctions</key> \
    <true/> \
    <key>FakeID</key> \
    <dict> \
      <key>ATI</key> \
      <string>0x22221002</string> \
      <key>IMEI</key> \
      <string>0x22221002</string> \
      <key>IntelGFX</key> \
      <string>0x22221002</string> \
      <key>LAN</key> \
      <string>0x22221002</string> \
      <key>NVidia</key> \
      <string>0x22221002</string> \
      <key>SATA</key> \
      <string>0x22221002</string> \
      <key>WIFI</key> \
      <string>0x22221002</string> \
      <key>XHCI</key> \
      <string>0x22221002</string> \
    </dict> \
    <key>ForceHPET</key> \
    <true/> \
    <key>Inject</key> \
    <true/> \
    <key>IntelMaxValue</key> \
    <true/> \
    <key>LpcTune</key> \
    <true/> \
    <key>NoDefaultProperties</key> \
    <true/> \
    <key>Properties</key> \
    <string>jj \
kk</string> \
    <key>SetIntelBacklight</key> \
    <true/> \
    <key>SetIntelMaxBacklight</key> \
    <true/> \
    <key>USB</key> \
    <dict> \
      <key>AddClockID</key> \
      <true/> \
      <key>FixOwnership</key> \
      <true/> \
      <key>HighCurrent</key> \
      <true/> \
      <key>Inject</key> \
      <true/> \
    </dict> \
    <key>UseIntelHDMI</key> \
    <true/> \
  </dict> \
  <key>DisableDrivers</key> \
  <array> \
    <string>OsxAptioFixDrv</string> \
    <string>Ps2KeyboardDxe</string> \
    <string>Ps2MouseDxe</string> \
  </array> \
  <key>GUI</key> \
  <dict> \
    <key>ConsoleMode</key> \
    <string>Max</string> \
    <key>Custom</key> \
    <dict> \
      <key>Entries</key> \
      <array> \
        <dict> \
          <key>AddArguments</key> \
          <string>addarg</string> \
          <key>Arguments</key> \
          <string>arg</string> \
          <key>BootBgColor</key> \
          <string>bootbgcolor</string> \
          <key>CustomLogo</key> \
          <string>Apple</string> \
          <key>Disabled</key> \
          <true/> \
          <key>DriveImage</key> \
          <string>driveimage</string> \
          <key>FullTitle</key> \
          <string>title</string> \
          <key>Hidden</key> \
          <false/> \
          <key>Hotkey</key> \
          <string>H</string> \
          <key>Ignore</key> \
          <true/> \
          <key>Image</key> \
          <string>image</string> \
          <key>Path</key> \
          <string>path</string> \
          <key>Settings</key> \
          <string>settings</string> \
          <key>SubEntries</key> \
          <array> \
            <dict> \
              <key>AddArguments</key> \
              <string>arg2</string> \
              <key>FullTitle</key> \
              <string>title1</string> \
            </dict> \
            <dict> \
              <key>AddArguments</key> \
              <string>arg3</string> \
              <key>Title</key> \
              <string>title2</string> \
            </dict> \
            <dict> \
              <key>AddArguments</key> \
              <string>arg4</string> \
              <key>FullTitle</key> \
              <string>title3</string> \
            </dict> \
            <dict> \
              <key>AddArguments</key> \
              <string>arg5</string> \
              <key>Title</key> \
              <string>title4</string> \
            </dict> \
          </array> \
          <key>Type</key> \
          <string>Oldest</string> \
          <key>Volume</key> \
          <string>v1</string> \
          <key>VolumeType</key> \
          <string>Internal</string> \
        </dict> \
      </array> \
      <key>Legacy</key> \
      <array> \
        <dict> \
          <key>Disabled</key> \
          <true/> \
          <key>FullTitle</key> \
          <string>title</string> \
          <key>Hidden</key> \
          <true/> \
          <key>Hotkey</key> \
          <string></string> \
          <key>Ignore</key> \
          <true/> \
          <key>Type</key> \
          <string>Windows</string> \
          <key>Volume</key> \
          <string>v2</string> \
        </dict> \
      </array> \
      <key>Tool</key> \
      <array> \
        <dict> \
          <key>Arguments</key> \
          <string>b</string> \
          <key>Disabled</key> \
          <true/> \
          <key>Hidden</key> \
          <true/> \
          <key>Hotkey</key> \
          <string>b</string> \
          <key>Ignore</key> \
          <true/> \
          <key>Path</key> \
          <string>path</string> \
          <key>Title</key> \
          <string>title</string> \
          <key>Volume</key> \
          <string>tool1</string> \
        </dict> \
      </array> \
    </dict> \
    <key>CustomIcons</key> \
    <true/> \
    <key>Hide</key> \
    <array> \
      <string>sdfsdfdf</string> \
      <string>sdfsfdf</string> \
    </array> \
    <key>Language</key> \
    <string>es:0</string> \
    <key>Mouse</key> \
    <dict> \
      <key>DoubleClick</key> \
      <integer>501</integer> \
      <key>Enabled</key> \
      <true/> \
      <key>Mirror</key> \
      <true/> \
      <key>Speed</key> \
      <integer>5</integer> \
    </dict> \
    <key>Scan</key> \
    <dict> \
      <key>Entries</key> \
      <true/> \
      <key>Kernel</key> \
      <string>First</string> \
      <key>Legacy</key> \
      <string>First</string> \
      <key>Linux</key> \
      <true/> \
      <key>Tool</key> \
      <true/> \
    </dict> \
    <key>ScreenResolution</key> \
    <string>1366x768</string> \
    <key>ShowOptimus</key> \
    <true/> \
    <key>TextOnly</key> \
    <true/> \
    <key>Theme</key> \
    <string>th</string> \
  </dict> \
  <key>Graphics</key> \
  <dict> \
    <key>ATI</key> \
    <array> \
      <dict> \
        <key>IOPCIPrimaryMatch</key> \
        <string>0x1002888</string> \
        <key>IOPCISubDevId</key> \
        <string>0x106B</string> \
        <key>LoadVBios</key> \
        <true/> \
        <key>Model</key> \
        <string>cc</string> \
        <key>VRAM</key> \
        <integer>2000</integer> \
        <key>VideoPorts</key> \
        <integer>3</integer> \
      </dict> \
    </array> \
    <key>BootDisplay</key> \
    <integer>12</integer> \
    <key>DualLink</key> \
    <integer>1</integer> \
    <key>EDID</key> \
    <dict> \
      <key>Custom</key> \
      <data> \
      AQID \
      </data> \
      <key>Inject</key> \
      <true/> \
      <key>ProductID</key> \
      <string>0x9777</string> \
      <key>VendorID</key> \
      <string>0x1007</string> \
    </dict> \
    <key>FBName</key> \
    <string>Exmoor</string> \
    <key>Inject</key> \
    <dict> \
      <key>ATI</key> \
      <true/> \
      <key>Intel</key> \
      <true/> \
      <key>NVidia</key> \
      <true/> \
    </dict> \
    <key>LoadVBios</key> \
    <true/> \
    <key>NVCAP</key> \
    <string>0304</string> \
    <key>NVIDIA</key> \
    <array> \
      <dict> \
        <key>IOPCIPrimaryMatch</key> \
        <string>0x10DE999</string> \
        <key>IOPCISubDevId</key> \
        <string>0x106B</string> \
        <key>LoadVBios</key> \
        <false/> \
        <key>Model</key> \
        <string>aa</string> \
        <key>VRAM</key> \
        <integer>1000</integer> \
        <key>VideoPorts</key> \
        <integer>1</integer> \
      </dict> \
      <dict> \
        <key>IOPCIPrimaryMatch</key> \
        <string>0x10DE999</string> \
        <key>IOPCISubDevId</key> \
        <string>0x106B</string> \
        <key>LoadVBios</key> \
        <true/> \
        <key>Model</key> \
        <string>bb</string> \
        <key>VRAM</key> \
        <integer>1000</integer> \
        <key>VideoPorts</key> \
        <integer>2</integer> \
      </dict> \
    </array> \
    <key>NvidiaGeneric</key> \
    <true/> \
    <key>NvidiaNoEFI</key> \
    <true/> \
    <key>NvidiaSingle</key> \
    <true/> \
    <key>PatchVBios</key> \
    <true/> \
    <key>PatchVBiosBytes</key> \
    <array> \
      <dict> \
        <key>Find</key> \
        <data> \
        AwQF \
        </data> \
        <key>Replace</key> \
        <data> \
        BgcI \
        </data> \
      </dict> \
    </array> \
    <key>VRAM</key> \
    <integer>1500</integer> \
    <key>VideoPorts</key> \
    <integer>2</integer> \
    <key>display-cfg</key> \
    <string>04</string> \
    <key>ig-platform-id</key> \
    <string>0x59230000</string> \
  </dict> \
  <key>KernelAndKextPatches</key> \
  <dict> \
    <key>ATIConnectorsController</key> \
    <string>ATICtl</string> \
    <key>ATIConnectorsData</key> \
    <string>111213</string> \
    <key>ATIConnectorsPatch</key> \
    <string>141516</string> \
    <key>AppleIntelCPUPM</key> \
    <true/> \
    <key>AppleRTC</key> \
    <true/> \
    <key>BootPatches</key> \
    <array> \
      <dict> \
        <key>Comment</key> \
        <string>c3</string> \
        <key>Disabled</key> \
        <true/> \
        <key>Find</key> \
        <data> \
        MTI= \
        </data> \
        <key>MatchBuild</key> \
        <string>10.12.6</string> \
        <key>MatchOS</key> \
        <string>10.12</string> \
        <key>Replace</key> \
        <data> \
        MzQ= \
        </data> \
      </dict> \
    </array> \
    <key>Debug</key> \
    <true/> \
    <key>DellSMBIOSPatch</key> \
    <true/> \
    <key>FakeCPUID</key> \
    <string>0x0306D0</string> \
    <key>ForceKextsToLoad</key> \
    <array> \
      <string>ForceKext</string> \
    </array> \
    <key>KernelCpu</key> \
    <true/> \
    <key>KernelLapic</key> \
    <true/> \
    <key>KernelPm</key> \
    <true/> \
    <key>KernelToPatch</key> \
    <array> \
      <dict> \
        <key>Comment</key> \
        <string>c2</string> \
        <key>Disabled</key> \
        <true/> \
        <key>Find</key> \
        <data> \
        ISI= \
        </data> \
        <key>MatchBuild</key> \
        <string>10.13.6</string> \
        <key>MatchOS</key> \
        <string>10.13</string> \
        <key>Replace</key> \
        <data> \
        IyQ= \
        </data> \
      </dict> \
    </array> \
    <key>KernelXCPM</key> \
    <true/> \
    <key>KextsToPatch</key> \
    <array> \
      <dict> \
        <key>Comment</key> \
        <string>c1</string> \
        <key>Disabled</key> \
        <true/> \
        <key>Find</key> \
        <data> \
        AQ== \
        </data> \
        <key>InfoPlistPatch</key> \
        <true/> \
        <key>MatchBuild</key> \
        <string>10.14.6</string> \
        <key>MatchOS</key> \
        <string>10.14</string> \
        <key>Name</key> \
        <string>k1</string> \
        <key>Replace</key> \
        <data> \
        Ag== \
        </data> \
      </dict> \
      <dict> \
        <key>Comment</key> \
        <string>IONVMeFamily IONameMatch</string> \
        <key>Disabled</key> \
        <false/> \
        <key>Find</key> \
        <data> \
        PHN0cmluZz5wY2kxNDRkLGE4MDQ8L3N0cmluZz4= \
        </data> \
        <key>InfoPlistPatch</key> \
        <true/> \
        <key>Name</key> \
        <string>IONVMeFamily</string> \
        <key>Replace</key> \
        <data> \
        PHN0cmluZz5wY2kxNDRkLGE4MDI8L3N0cmluZz4= \
        </data> \
      </dict> \
    </array> \
  </dict> \
  <key>RtVariables</key> \
  <dict> \
    <key>BooterConfig</key> \
    <string>0x1</string> \
    <key>CsrActiveConfig</key> \
    <string>0x2</string> \
    <key>MLB</key> \
    <string>12345678901234567</string> \
    <key>ROM</key> \
    <data> \
    MBRwYnHo \
    </data> \
  </dict> \
  <key>SMBIOS</key> \
  <dict> \
    <key>BiosReleaseDate</key> \
    <string>08/08/17</string> \
    <key>BiosVendor</key> \
    <string>Apple Inc.</string> \
    <key>BiosVersion</key> \
    <string>MBP81.88Z.004D.B00.1708080655</string> \
    <key>Board-ID</key> \
    <string>Mac-94245B3640C91C81</string> \
    <key>BoardManufacturer</key> \
    <string>Apple Inc.</string> \
    <key>BoardSerialNumber</key> \
    <string>W89135306OPDM6CAD</string> \
    <key>BoardType</key> \
    <integer>10</integer> \
    <key>BoardVersion</key> \
    <string>1.0</string> \
    <key>ChassisAssetTag</key> \
    <string>MacBook-Aluminum</string> \
    <key>ChassisManufacturer</key> \
    <string>Apple Inc.</string> \
    <key>ChassisType</key> \
    <string>0x0A</string> \
    <key>Family</key> \
    <string>MacBook Pro</string> \
    <key>FirmwareFeatures</key> \
    <string>0xC00DE137</string> \
    <key>FirmwareFeaturesMask</key> \
    <string>0xFF1FFF3F</string> \
    <key>LocationInChassis</key> \
    <string>Part Component</string> \
    <key>Manufacturer</key> \
    <string>Apple Inc.</string> \
    <key>Memory</key> \
    <dict> \
      <key>Channels</key> \
      <integer>2</integer> \
      <key>Modules</key> \
      <array> \
        <dict> \
          <key>Frequency</key> \
          <integer>333</integer> \
          <key>Part</key> \
          <string>Part1</string> \
          <key>Serial</key> \
          <string>Ser1</string> \
          <key>Size</key> \
          <integer>2048</integer> \
          <key>Slot</key> \
          <integer>1</integer> \
          <key>Type</key> \
          <string>DDR</string> \
          <key>Vendor</key> \
          <string>v1</string> \
        </dict> \
        <dict> \
          <key>Frequency</key> \
          <integer>366</integer> \
          <key>Part</key> \
          <string>Part2</string> \
          <key>Serial</key> \
          <string>Ser2</string> \
          <key>Size</key> \
          <integer>4096</integer> \
          <key>Slot</key> \
          <integer>2</integer> \
          <key>Type</key> \
          <string>DDR2</string> \
          <key>Vendor</key> \
          <string>v2</string> \
        </dict> \
      </array> \
      <key>SlotCount</key> \
      <integer>4</integer> \
    </dict> \
    <key>Mobile</key> \
    <true/> \
    <key>PlatformFeature</key> \
    <string>0xFFFF</string> \
    <key>ProductName</key> \
    <string>MacBookPro8,1</string> \
    <key>SerialNumber</key> \
    <string>W89G91VFDH2G</string> \
    <key>Slots</key> \
    <array> \
      <dict> \
        <key>Device</key> \
        <string>NVidia</string> \
        <key>ID</key> \
        <integer>1</integer> \
        <key>Name</key> \
        <string>APPL,sdfsdf</string> \
        <key>Type</key> \
        <integer>1</integer> \
      </dict> \
    </array> \
    <key>SmUUID</key> \
    <string>F1AB23C0-C35A-473E-BDB7-455C3A6271E8</string> \
    <key>Version</key> \
    <string>1.0</string> \
  </dict> \
  <key>SystemParameters</key> \
  <dict> \
    <key>BacklightLevel</key> \
    <string>2</string> \
    <key>CustomUUID</key> \
    <string>2926A57C-FF0E-4A64-980F-23483BD41969</string> \
    <key>ExposeSysVariables</key> \
    <true/> \
    <key>InjectKexts</key> \
    <string>Yes</string> \
    <key>InjectSystemID</key> \
    <true/> \
    <key>NoCaches</key> \
    <true/> \
    <key>NvidiaWeb</key> \
    <true/> \
  </dict> \
</dict> \
</plist>";

int plist_tests()
{
  TagDict* dict = NULL;
  EFI_STATUS Status = ParseXML(config_all, &dict, (UINT32)strlen(config_all));
  if ( !EFI_ERROR(Status) ) {
    XString8 s;
    dict->sprintf(0, &s);
    TagDict* dict2 = NULL;
    Status = ParseXML(s.c_str(), &dict2, s.length());
    if ( !EFI_ERROR(Status) ) {
      if ( !(*dict).debugIsEqual(*dict2, "plist"_XS8) ) {
//        printf("%s", s.c_str());
        return 1;
      }
    }
  }

  return 0;
}

#else
int plist_tests()
{
	// TODO with VS, I get a string too big.
	return 0;
}

#endif