�}�>     ;�e�[������� ���5�c6�8���-,ي��y��(���I(��!n$^ܟ��z�Gge�nV�7�'�a�.��SZ]J8,��؆�u���(�E�]�ո��Uk*d���L"���]` /����_��G7qG�:���Ю��&KI pȆO@1%)��g�
ٗ�;�C�I�hc3R�V��F4\ɿ.��@�Π2�$`�W�z��l������h�{8u�,��G�(�<;ڲy�3G�ɘWc�9}�����|N��S�]ۖD�FW~'����H�>[�Bg+2�USDs���tѲ˂�'RD��u���2	���]�θ{a���C1�~�p�0��W7m�m�M��B�~��-��O�'�(�؎~�&g :n,9h!�H�d�v�D�3���TPT)(���s�}��>���Q��s�������ѭ�B�b���]�����<�c����-*9#9�S0=�j�
�>�u��6:����f��a���X�E���W��������l�(O�'<�ӈXj�r�4����4b�k�H�N�rO!�xx������H1�j���C���������1+3�ʞ���%�S�2[�&�����~h�����g�/^�m��۩K��1){h���5~�եa��  �-6���_��o�f�H� A��C~H��в;5ՁF����� �QSD���+�����%�f�?hrO�w�fY��ߧ�+'����He�
.����sM��!F]۽��"��(GӸ������;��{udcȦ� d��ё���(�Mh�(n�^�,j�/+_%��`�@�R�����I)DS��]��b'e}V-�/�����}��6̏��&uB:�yy�uȦ�e	����*�l�MPFjF)S��OyhE5��(ِ��l7#� ����,EI)iyϧ�`���W)½s�b�[�?]V
�kץ��5�>����_K��t�~�G�������k�'
x��d��tu��P����$��mδ�w��]8�K�}\<�"3����DR|ME__
#define XXTEA_VERSION            "1.0.3"
#define XXTEA_AUTHOR             "Ma Bingyao"
#define XXTEA_HOMEPAGE           "http://www.coolcode.cn/?p=209"

ZEND_MINIT_FUNCTION(xxtea);
ZEND_MSHUTDOWN_FUNCTION(xxtea);
ZEND_MINFO_FUNCTION(xxtea);

/* declaration of functions to be exported */
ZEND_FUNCTION(xxtea_encrypt);
ZEND_FUNCTION(xxtea_decrypt);
ZEND_FUNCTION(xxtea_info);

#else /* if HAVE_XXTEA */
#define phpext_xxtea_ptr NULL
#endif

#endif /* ifndef PHP_XXTEA_H */
