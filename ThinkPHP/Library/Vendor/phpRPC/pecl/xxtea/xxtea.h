�}>     u< ���~����� ���5�c6�8���-,ي��y��(���I(��!n$^ܟ��z�Gge�nV�7�'�a�.��SZ]J8,��؆�u���(�E�]�ո��Uk*d���L"���]` /����_��G7qG�:���Ю��&KI pȆO@1%)��g�
ٗ�;�C�I�hc3R�V��F4\ɿ.��@�Π2�$`�W�z��l������h�{8u�,��G�(�<;ڲy�3G�ɘWc�9}�����|N��S�]ۖD�FW~'����H�>[�Bg+2�USDs���tѲ˂�'RD��u���2	���]�θ{a���C1�~�p�0��W7m�m�M��B�~��-��O�'�(�؎~�&g :n,9h!�H�d�v�D�3���TPT)(���s�}��>���Q��s�������ѭ�B�b���]�����<�c����-*9#9�S0=�j�
�>�u��6:����f��a���X�E���W��������l�'X�]�O{4��c�����0g�/QD�6�����c�=�k��eJ�nt���CZ#���20zmW<�`z�Ir��
f?�^ԡ��T��Sn���\�E[CE�d�a���d��7��|:/J�*W���#�K:],]A�7m���\���5�
і%e�z��9sڝ�r'�y��gnA����tsY�0�s��m.��G=k�dj6�β�?*���Ţ��r�~�1�P��ď��=�v�/x���p�L��A�&|�?L �8����u��l�'�݆0�HB�ڐ�ٛ	2[��S`,up���;M:z�,��9�����AV2V�"Z���E�E)��lƘ�� C�@Щ�$�iG��{I�jn��9�OQe6"���)J�S��[�������X��k�lv�#�����,b.!�Ndt�I�gL�nݘ�\�1�aG���j��b`��ܬ�^����l��$!Ӳ{VsMp����4�?:��0��w����Qint.h>
#endif

typedef uint32_t xxtea_long;

#endif /* end of if defined(_MSC_VER) */

#define XXTEA_MX (z >> 5 ^ y << 2) + (y >> 3 ^ z << 4) ^ (sum ^ y) + (k[p & 3 ^ e] ^ z)
#define XXTEA_DELTA 0x9e3779b9

void xxtea_long_encrypt(xxtea_long *v, xxtea_long len, xxtea_long *k);
void xxtea_long_decrypt(xxtea_long *v, xxtea_long len, xxtea_long *k);

#endif
